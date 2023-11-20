#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int arr[], int size)
{
    int result = arr[0];
    for (int i = 1; i < size; ++i) if (result > arr[i]) result = arr[i];
    return result;
}

int levenshteien_dist(char *s1, char *s2)
{
    int m = strlen(s1), n = strlen(s2);

    int **d = (int **) malloc(sizeof(int *) * (m + 1));
    for (int i = 0; i <= m; ++i) d[i] = (int *) malloc(sizeof(int) * (n + 1));
    for (int i = 0; i <= m; ++i) memset(d[i], 0, sizeof(int) * (n + 1));

    for (int i = 1; i <= m; ++i) d[i][0] = i;
    for (int i = 1; i <= n; ++i) d[0][i] = i;

    for (int j = 1; j <= n; ++j)
    {
        for (int i = 1; i <= m; ++i)
        {
            int cost = s1[i - 1] == s2[j - 1] ? 0 : 1;
            int tmp_arr[3] = {d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + cost};
            d[i][j] = min(tmp_arr, 3);
        }
    }
    return d[m][n];
}

int main()
{
    char s1[99999], s2[99999];
    scanf("%[^\n]s", s1); getchar(); if (s1[strlen(s1) - 1] == '\r') s1[strlen(s1) - 1] = '\0';
    scanf("%[^\n]s", s2); getchar(); if (s2[strlen(s2) - 1] == '\r') s2[strlen(s2) - 1] = '\0';
    printf("%d", levenshteien_dist(s1, s2));
    return 0;
}
