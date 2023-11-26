#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[9999 / 2];
int stack_idx;

int main()
{
    char input[9999];
    scanf("%s", input);

    for (int i = 1; input[i - 1] != '\0'; ++i)
    {
        if (input[i - 1] == '(') stack[stack_idx++] = i;
        else if (input[i - 1] == ')') printf("%d %d\n", stack[--stack_idx], i);
    }
    return 0;
}

