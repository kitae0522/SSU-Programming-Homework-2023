#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_MAX 555
#define ALPHA_MAX 26

int target_alpha[ALPHA_MAX + 1];
int reference_alpha[ALPHA_MAX + 1];

void flush()
{
    memset(target_alpha, 0, sizeof(target_alpha));
    memset(reference_alpha, 0, sizeof(reference_alpha));
}

char upper2lower(const char c)
{
    if ('A' <= c && c <= 'Z') return c - 'A' + 'a';
    else if ('a' <= c && c <= 'z') return c;
}

int is_anag(const char *target_string, const char *reference_string)
{
    flush();
    for (int i = 0; i < strlen(target_string); ++i)
    {
        char c = upper2lower(target_string[i]);
        if ('a' <= c && c <= 'z') target_alpha[c - 'a']++;
        else target_alpha[ALPHA_MAX]++;
    }
    for (int i = 0; i < strlen(reference_string); ++i)
    {
        char c = upper2lower(reference_string[i]);
        if ('a' <= c && c <= 'z') reference_alpha[c - 'a']++;
        else reference_alpha[ALPHA_MAX]++;
    }
    for (int i = 0; i < ALPHA_MAX + 1; ++i) if (target_alpha[i] != reference_alpha[i]) return 0;
    return 1;
}

char *lower_string(const char *string)
{
    int len = strlen(string);
    char *new_string = (char *) malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < strlen(string); ++i) new_string[i] = upper2lower(string[i]);
    new_string[len] = '\0';
    return new_string;
}

int main()
{
    char input[INPUT_MAX], line[INPUT_MAX];
    FILE *file = fopen("american-english-large.txt", "r");
    int flag = 0;

    scanf("%[^\n]s", input);
    getchar();
    if (input[(int) strlen(input) - 1] == '\r') input[(int) strlen(input) - 1] = '\0';

    while (!feof(file))
    {
        fgets(line, INPUT_MAX, file);
        if (line[(int) strlen(line) - 1] == '\n') line[(int) strlen(line) - 1] = '\0';
        if (is_anag(input, line))
        {
            printf("%s\n", lower_string(line));
            flag = 1;
            break;
        }
    }
    if (!flag) printf("-1\n");
    fclose(file);

    return 0;
}

