#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, r, c, x = 1, d = 1;

int main()
{
    scanf("%d", &n);
    int** arr = (int**) malloc(sizeof(int*) * n);
    for (int i = 0; i < n; ++i) arr[i] = (int*) malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i) arr[r][c] = x++, c += d;
    c--;

    for (int i = n - 1; i > 0; --i)
    {
        for (int j = 0; j < i; ++j) r += d, arr[r][c] = x++;
        for (int j = 0; j < i; ++j) c -= d, arr[r][c] = x++;
        d *= -1;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j) printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
