#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char open_bracket[] = {'(', '[', '{', '<'};
char close_bracket[] = {')', ']', '}', '>'};

int is_in(char key, char *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++) if (key == arr[i]) return i;
    return -1;
}

int check_vps(char *string)
{
    int size = 0;
    char *stack = (char *) malloc(sizeof(char) * (strlen(string) + 1));
    memset(stack, '\0', strlen(string) + 1);

    for (int i = 0; string[i] != '\0'; ++i)
    {
        if (is_in(string[i], open_bracket, 4) != -1) stack[size++] = string[i];
        else if (is_in(string[i], close_bracket, 4) != -1)
        {
            char pop_item = stack[size - 1];
            if (size <= 0 || string[i] != close_bracket[is_in(pop_item, open_bracket, 4)]) return 0;
            stack[size--] = '\0';
        }
    }
    return size == 0;
}

int main()
{
    char input[99999];
    scanf("%[^\n]s", input);
    getchar();
    if (input[(int) strlen(input) - 1] == '\r') input[(int) strlen(input) - 1] = '\0';
    printf("%s", check_vps(input) ? "TRUE" : "FALSE");
    return 0;
}

