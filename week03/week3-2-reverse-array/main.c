#include <stdio.h>
#include <string.h>

int char2int(const char *str)
{
    int res = 0, sign = 1;
    while (*str != '\0')
    {
        if (*str == '-') sign = -1;
        else if ('0' <= *str && *str <= '9') res = res * 10 + (*str - '0');
        else break;
        str++;
    }
    return res * sign;
}

void string_slice(const char *input, int start, int end, char *output)
{
    int idx = 0;
    for (int i = start; i < end; ++i) output[idx++] = input[i];
    output[idx] = '\0';
}

int main()
{
    char str[5005];
    int item[1001];
    scanf("%[^\n]s", str);
    int str_len = strlen(str);
    int idx = 0, left = 0, right = 0;
    while (right <= str_len)
    {
        if (str[right] != ' ' && str[right] != '\0') right++;
        else
        {
            char tmp[1001];
            string_slice(str, left, right, tmp);
            item[idx++] = char2int(tmp);
            left = ++right;
        }
    }
    for (int i = idx - 1; i >= 0; i--) printf("%d ", item[i]);
    return 0;
}

