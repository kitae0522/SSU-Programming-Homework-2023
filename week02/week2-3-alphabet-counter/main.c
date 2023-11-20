#include <stdio.h>

int map_of_alpha[26];

int get_is_alpha(char alpha)
{
    return ('a' <= alpha && alpha <= 'z') || ('A' <= alpha && alpha <= 'Z');
}

int convert_alpha_lower(char alpha)
{
    if ('A' <= alpha && alpha <= 'Z') return alpha + ('a' - 'A');
    return alpha;
}

int main()
{
    char input[1001];
    fgets(input, sizeof(input), stdin);

    int idx = 0;
    while (input[idx] != '\0')
    {
        if (get_is_alpha(input[idx]))
            map_of_alpha[convert_alpha_lower(input[idx]) - 'a']++;
        idx++;
    }
    for (int i = 0; i < 26; ++i) if (map_of_alpha[i] > 0) printf("%c:%d ", i + 'a', map_of_alpha[i]);
    printf("\n");

    return 0;
}
