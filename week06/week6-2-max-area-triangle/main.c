#include <stdio.h>
#include <stdlib.h>

int N;

double _abs(double r)
{
    if (r >= 0) return r;
    return r * -1;
}

long double formula(int **arr)
{
    long double mx = -1.0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            for (int k = 0; k < N; ++k)
            {
                long double r = _abs((arr[i][0] * arr[j][1])
                                     + (arr[j][0] * arr[k][1])
                                     + (arr[k][0] * arr[i][1])
                                     - (arr[i][1] * arr[j][0])
                                     - (arr[j][1] * arr[k][0])
                                     - (arr[k][1] * arr[i][0]));
                if (mx < r) mx = r;
            }
        }
    }
    return mx * 0.5;
}

int main()
{
    scanf("%d", &N);
    int **A = (int **) malloc(sizeof(int *) * N);
    for (int i = 0; i < N; ++i) A[i] = (int *) malloc(sizeof(int) * N * 2);
    for (int i = 0; i < N; ++i) scanf("%d %d", &A[i][0], &A[i][1]);
//    // for debug
//    for (int i = 0; i < N; ++i) printf("%d %d\n", A[i][0], A[i][1]);
    printf("%0.1Lf", formula(A));

    return 0;
}
