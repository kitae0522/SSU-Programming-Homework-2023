#include <stdio.h>
#include <string.h>

int main()
{
    char str[3003];
    scanf("%s", str);
    int len_str = strlen(str);
    for (int i = 0; i < len_str; ++i)
    {
        int cnt = 1;
        while (i < len_str - 1 && str[i] == str[i + 1]) cnt++, i++;
        printf("%c%d", str[i], cnt);
    }
    return 0;
}
