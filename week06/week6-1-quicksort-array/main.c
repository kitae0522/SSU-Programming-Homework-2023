#include <stdio.h>
#include <stdlib.h>

int cmp(const void *first, const void *second)
{
    if (*(int *) first < *(int *) second) return 1;
    else if (*(int *) first == *(int *) second) return 0;
    return -1;
}

int main()
{
    int N;
    scanf("%d", &N);
    int *A = (int *) malloc(sizeof(int) * N);
    for (int i = 0; i < N; ++i) scanf("%d", &A[i]);
    qsort(A, N, sizeof(int), cmp);
    for (int i = 0; i < N; ++i) printf("%d ", A[i]);
    return 0;
}
