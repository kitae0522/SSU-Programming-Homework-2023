#include <stdio.h>

int get_len_of_string(const char *str)
{
    int len = 0;
    while (*str != '\0') str++, len++;
    return len;
}

void print_str(int start, int end, const char *str)
{
    int len_str = end - start;
    for (int i = start; i < end; ++i)
    {
        if (i >= len_str) printf("%c", str[i - len_str]);
        else printf("%c", str[i]);
    }
}

int main()
{
    char str[1001];
    scanf("%[^\n]s", str);
    getchar();
    int len_str = get_len_of_string(str);
    if (str[len_str - 1] == '\r') str[len_str - 1] = '\0', len_str--;
    puts(str);
    for (int i = 1; i < len_str; ++i)
    {
        print_str(i, len_str + i, str);
        printf("\r\n");
    }
    return 0;
}
