#include <stdio.h>
#include <stdlib.h>

void rotate(int a[], int s, int e, int d)
{
    while (d--)
    {
        int tmp = a[s];
        for (int i = s; i < e; ++i) a[i] = a[i + 1];
        a[e] = tmp;
    }
}

int main()
{
    int N, S, E, D;
    scanf("%d", &N);
    int *A = (int *) malloc(sizeof(int) * N);
    for (int i = 0; i < N; ++i) scanf("%d ", &A[i]);
    scanf("%d %d %d", &S, &E, &D);
    rotate(A, S, E, D);
    for (int i = 0; i < N; ++i) printf("%d ", A[i]);
    return 0;
}
