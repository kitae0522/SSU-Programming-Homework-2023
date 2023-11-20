#include <stdio.h>
#include <stdlib.h>

//1 2 3 4 5
//16 17 18 19 6
//15 24 25 20 7
//14 23 22 21 8
//13 12 11 10 9
// 5, 4, 4, 3, 3, 2, 2, 1, 1

int N, R, C, X = 1, D = 1;

int main()
{
    scanf("%d", &N);
    int **A = (int **) malloc(sizeof(int *) * N);
    for (int i = 0; i < N; ++i) A[i] = (int *) malloc(sizeof(int) * N);

    for (int i = 0; i < N; ++i) A[R][C] = X++, C += D;
    C--;
    for (int i = N - 1; i > 0; --i)
    {
        for (int j = 0; j < i; ++j) R += D, A[R][C] = X++;
        D *= -1;
        for (int j = 0; j < i; ++j) C += D, A[R][C] = X++;
    }
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j) printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}
