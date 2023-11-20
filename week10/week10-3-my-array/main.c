#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_slice(const char *string, int start, int end)
{
    int size = 0;
    char *new_string = (char *) malloc(sizeof(char) * (end - start + 1));
    for (int i = start; i < end; ++i) new_string[i - start] = string[i], size++;
    new_string[size] = '\0';
    return new_string;
}

int convert_string2int(const char *string)
{
    int sign = string[0] == '-' ? -1 : 1;
    int new_number = 0;
    for (int i = 0; i < strlen(string); ++i)
    {
        if ('0' <= string[i] && string[i] <= '9')
        {
            new_number *= 10;
            new_number += string[i] - '0';
        }
    }
    return new_number * sign;
}

int *get_access_point(const char *access_input, int *size)
{
    int bracket_cnt = 0;
    for (int idx = 0; access_input[idx] != '\0'; ++idx) if (access_input[idx] == '[') bracket_cnt++;

    int *access_point_array = (int *) malloc(sizeof(int) * (bracket_cnt + 1));
    memset(access_point_array, -1, sizeof(int) * (bracket_cnt + 1));

    int last_end = -1;
    for (int i = 0, idx = 0; i < bracket_cnt && access_input[idx] != '\0'; ++idx)
    {
        int start = idx, end = last_end;
        for (int k = start; k < strlen(access_input); ++k)
        {
            if (access_input[k] == '[')
            {
                start = k;
                break;
            }
            else if (access_input[k] == ']')
            {
                end = k - 1;
                break;
            }
        }
        if (last_end == end) continue;
        access_point_array[i++] = convert_string2int(string_slice(access_input, start, end + 1));
        last_end = end;
    }
    *size = bracket_cnt;
    return access_point_array;
}

char *find_string(const char *string, int key_index)
{
    int open_bracket_cnt = 0, element_cnt = 0;
    int start = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '[') open_bracket_cnt++;
        if (string[i] == ']') open_bracket_cnt--;
        if (!open_bracket_cnt && string[i] == ',' && string[i + 1] == ' ')
        {
            char *substring = string_slice(string, start, i);
            if (element_cnt == key_index) return substring;
            element_cnt++;
            start = i + 2;
        }
    }
    return string_slice(string, start, strlen(string));
}

int main()
{
    char input[99999];
    char access_input[99999];

    scanf("%[^\n]s", input); getchar(); if (input[(int) strlen(input) - 1] == '\r') input[(int) strlen(input) - 1] = '\0';
    scanf("%[^\n]s", access_input); getchar(); if (access_input[(int) strlen(access_input) - 1] == '\r') access_input[(int) strlen(access_input) - 1] = '\0';

    int access_point_cnt = 0;
    int *access_point_array = get_access_point(access_input, &access_point_cnt);

    if (access_point_cnt == 0)
    {
        printf("%s", input);
        return 0;
    }

    char *refined_input, *parse_input;
    for (int i = 0; i < access_point_cnt; ++i)
    {
        if (i == 0) refined_input = string_slice(input, 1, strlen(input) - 1);
        else refined_input = string_slice(parse_input, 1, strlen(parse_input) - 1);
        parse_input = find_string(refined_input, access_point_array[i]);
    }
    printf("%s", parse_input);

    return 0;
}
