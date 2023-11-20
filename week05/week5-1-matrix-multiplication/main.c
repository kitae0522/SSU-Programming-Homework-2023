#include <stdio.h>
#include <stdlib.h>

int N, A[20][20], B[20][20];

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) scanf("%d", &A[i][j]);
    for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) scanf("%d", &B[i][j]);
    int **R = (int **) malloc(sizeof(int *) * N);
    for (int i = 0; i < N; ++i) R[i] = (int *) malloc(sizeof(int) * N);
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            R[i][j] = 0;
            for (int k = 0; k < N; ++k) R[i][j] += A[i][k] * B[k][j];
        }
    }
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j) 
		{
			if (j != N - 1) printf("%d ", R[i][j]);
			else printf("%d", R[i][j]);
		}
		if (i != N - 1) printf("\n");
    }
    for (int i = 0; i < N; ++i) free(R[i]);
    free(R);
    return 0;
}
