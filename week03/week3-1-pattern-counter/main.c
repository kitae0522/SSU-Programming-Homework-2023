#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_slice(const char *string, int start, int end)
{
    char *new_string = (char *) malloc(sizeof(char) * (end - start + 1));
    memset(new_string, 0, sizeof(char));
    for (int i = start; i < end; ++i) new_string[i - start] = string[i];
    new_string[end - start + 1] = '\0';
    return new_string;
}

int main()
{
    char reference_string[1001]; scanf("%[^\n]s", reference_string); getchar();
    char target_string[1001]; scanf("%[^\n]s", target_string); getchar();

    int size = 0, result = 0;
    while (reference_string[size] != '\0' || size < strlen(reference_string))
    {
        char *slice_string = string_slice(reference_string, size, strlen(target_string) + size);
        int str_res = strcmp(slice_string, target_string);
        if (!str_res) result++, size += strlen(target_string);
        else size++;
    }
    printf("%d", result);

    return 0;
}
