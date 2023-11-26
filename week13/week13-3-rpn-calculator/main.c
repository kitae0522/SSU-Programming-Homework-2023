#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double stack[999];
int stack_idx;

int main()
{
    char *input = "3 4 *";
    char *ptr = strtok(input, ' ');
    while (ptr != NULL)
    {
        if (isdigit(ptr)) stack[stack_idx++] = atof(ptr);
        else
        {
            double n = stack[--stack_idx];
            double m = stack[--stack_idx];
            double r = 0;

            if (*ptr == '+') r = n + m;
            if (*ptr == '-') r = n - m;
            if (*ptr == '*') r = n * m;
            if (*ptr == '/') r = n / m;

            stack[stack_idx++] = 0;
        }
        ptr = strtok(NULL, " ");
    }
    printf("%d\n", (int) stack[0]);
    return 0;
}