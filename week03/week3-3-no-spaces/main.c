#include <stdio.h>
#include <string.h>

int main()
{
    char str[5005];
    scanf("%[^\n]s", str);
    for (int i = 0; i < strlen(str); ++i)if (str[i] != ' ') printf("%c", str[i]);
    return 0;
}

