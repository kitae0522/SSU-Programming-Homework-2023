#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double stack[999];
int stack_idx = -1;

double pop()
{
    double item = stack[stack_idx--];
    stack[stack_idx + 1] = 0;
    return item;
}

int main()
{
    char input[999];
    scanf("%[^\n]s", input); getchar(); if (input[strlen(input) - 1] == '\r') input[strlen(input) - 1] = '\0';
    char *ptr = strtok(input, " ");
    while (ptr != NULL)
    {
        if (isdigit(*ptr)) stack[++stack_idx] = atof(ptr);
        else
        {
            double n = pop();
            double m = pop();
            double r = 0;

            if (*ptr == '+') r = m + n;
            else if (*ptr == '-') r = m - n;
            else if (*ptr == '*') r = m * n;
            else if (*ptr == '/') r = m / n;

            stack[++stack_idx] = r;
        }
        ptr = strtok(NULL, " ");
    }
    printf("%d\n", (int) stack[0]);
    return 0;
}