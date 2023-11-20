#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *preprocessing(const char *str, char *new_str)
{
    char new_string[1001];
    int idx = 0;
    while (*str != '\0')
    {
        if ('a' <= *str && *str <= 'z') new_string[idx++] = *str;
        else if ('A' <= *str && *str <= 'Z') new_string[idx++] = *str - 'A' + 'a';
        str++;
    }
    new_string[idx] = '\0';
    strcpy(new_str, new_string);
}

int str_check(const char *str1, const char *str2)
{
    int idx = -1;
    for (int i1 = strlen(str1) - 1, i2 = strlen(str2) - 1; i1 >= 0 && i2 >= 0;)
    {
        if (str1[i1] == str2[i2]) idx = i1, i1--, i2--;
        else break;
    }
    return idx;
}

int main()
{
    char reference_str[1001], victim_str[1001], real_reference[1001], real_victim[1001];
    fgets(reference_str, 1001, stdin);
    fgets(victim_str, 1001, stdin);
    if (reference_str[strlen(reference_str) - 1] == '\r') reference_str[strlen(reference_str) - 1] = '\0';
    if (victim_str[strlen(victim_str) - 1] == '\r') victim_str[strlen(victim_str) - 1] = '\0';
    preprocessing(reference_str, real_reference);
    preprocessing(victim_str, real_victim);
    int result = str_check(real_reference, real_victim);
    if (result != -1) for (int i = result; i < strlen(real_reference); ++i) printf("%c", real_reference[i]);
    return 0;
}
