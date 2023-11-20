#include <stdio.h>

int get_string_len(const char *st)
{
    int len = 0;
    while (st[len] != '\0') len++;
    return len;
}

int get_is_alpha(const char c)
{
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

int get_is_number(const char c)
{
    return ('0' <= c && c <= '9');
}

int convert_alpha_lower(const char c)
{
    if ('A' <= c && c <= 'Z') return c + ('a' - 'A');
    return c;
}

int main()
{
    char input[1001];
    fgets(input, sizeof(input), stdin);

    int left = 0;
    int right = get_string_len(input) - 1;
    int state = 1;
    while (left < right)
    {
        const char left_char = (char) convert_alpha_lower(input[left]);
        const char right_char = (char) convert_alpha_lower(input[right]);
        if (!get_is_alpha(input[left]) && !get_is_number(input[left])) left++;
        else if (!get_is_alpha(input[right]) && !get_is_number(input[right])) right--;
        else if (left_char != right_char)
        {
            state = 0;
            break;
        }
        else
        {
            left++;
            right--;
        }
    }
    printf("%s", state ? "True\n" : "False");

    return 0;
}
