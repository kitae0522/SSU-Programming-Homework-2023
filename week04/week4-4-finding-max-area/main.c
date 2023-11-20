#include <stdio.h>
#define SIZE_OF_MATRIX 3

int N, A[101][101], M = -1;

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) scanf("%d", &A[i][j]);
//    // for debug
//    for (int i = 0; i < N; ++i)
//    {
//        for (int j = 0; j < N; ++j) printf("%d ", A[i][j]);
//        printf("\n");
//    }
    for (int i = 0; i <= N - SIZE_OF_MATRIX; ++i)
    {
        for (int j = 0; j <= N - SIZE_OF_MATRIX; ++j)
        {
            int S = 0;
            for (int k = 0; k < SIZE_OF_MATRIX; ++k) for (int l = 0; l < SIZE_OF_MATRIX; ++l) S += A[k + i][l + j];
//            // for debug
//            printf("%d\n", S);
            if (S > M) M = S;
        }
    }
    printf("%d", M);
    return 0;
}
