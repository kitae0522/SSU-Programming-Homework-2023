#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char roman_expression[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
int roman_value[] = {1000, 500, 100, 50, 10, 5, 1};

int is_in(char key, char *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++) if (key == arr[i]) return i;
    return -1;
}

int roman2int(char *string)
{
    int res = 0, prev = 0;
    for (int i = 0; string[i] != '\0'; ++i)
    {
        int curr = roman_value[is_in(string[i], roman_expression, 7)];
        res += curr - (curr > prev ? prev * 2 : 0);
        prev = curr;
    }
    return res;
}

int main()
{
    char input[99999];
    scanf("%[^\n]s", input); getchar(); if (input[(int) strlen(input) - 1] == '\r') input[(int) strlen(input) - 1] = '\0';
    printf("%d", roman2int(input));
    return 0;
}

