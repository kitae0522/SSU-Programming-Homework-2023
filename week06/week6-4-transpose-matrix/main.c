#include <stdio.h>
#include <stdlib.h>

int N, M;

int **transpose(int **arr)
{
    int **R = (int **) malloc(sizeof(int *) * M);
    for (int i = 0; i < M; ++i) R[i] = (int *) malloc(sizeof(int) * N);
    for (int i = 0; i < M; ++i) for (int j = 0; j < N; ++j) R[i][j] = arr[j][i];
    return R;
}

int main()
{
    scanf("%d %d", &N, &M);
    int **A = (int **) malloc(sizeof(int *) * N);
    for (int i = 0; i < N; ++i) A[i] = (int *) malloc(sizeof(int) * M);
    for (int i = 0; i < N; ++i) for (int j = 0; j < M; ++j) scanf("%d", &A[i][j]);
    int **R = transpose(A);
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (j == N - 1) printf("%d", R[i][j]);
            else printf("%d ", R[i][j]);
        }
        if (i != M - 1) printf("\n");
    }
    return 0;
}
