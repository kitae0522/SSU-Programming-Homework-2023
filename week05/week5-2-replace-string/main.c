#include <stdio.h>
#include <stdlib.h>

int get_len_of_string(const char *str)
{
    int len = 0;
    while (*str != '\0') str++, len++;
    return len;
}

void string_replace(char *str, char *find, char *replace, int len_str, int len_find, int len_replace)
{
    char *result = (char *) malloc(sizeof(char) * (len_str + 1));
    int i = 0, j = 0;
    while (i < len_str)
    {
        if (str[i] == find[0] || find[0] == '?')
        {
            int match = 1;
            for (int k = 0; k < len_find; k++)
            {
                if (find[k] != '?' && str[i + k] != find[k])
                {
                    match = 0;
                    break;
                }
            }
            if (match)
            {
                for (int k = 0; k < len_replace; k++) result[j++] = replace[k];
                i += len_find;
            }
            else result[j++] = str[i++];
        }
        else result[j++] = str[i++];
    }
    result[j] = '\0';
    puts(result);
}

int main()
{
    char x[1001], y[1001], z[1001];
    scanf("%[^\n]s", x);
    getchar();
    scanf("%[^\n]s", y);
    getchar();
    scanf("%[^\n]s", z);
    getchar();
    int len_str = get_len_of_string(x);
    int len_find = get_len_of_string(y);
    int len_replace = get_len_of_string(z);
    if (x[len_str - 1] == '\r') x[len_str - 1] = '\0', len_str--;
    if (y[len_find - 1] == '\r') y[len_find - 1] = '\0', len_find--;
    if (z[len_replace - 1] == '\r') z[len_replace - 1] = '\0', len_replace--;
    string_replace(x, y, z, len_str, len_find, len_replace);
    return 0;
}
