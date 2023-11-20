#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int degree;
    int *number;
    int size;
} Polynomial;

int max(int a, int b) { return a > b ? a : b; }

void debug(Polynomial N)
{
    printf("degree: %d | size: %d\n", N.degree, N.size);
    for (int i = 0; i < N.size; ++i) printf("%d ", N.number[i]);
    printf("\n");
}

int get_not_zero_idx(Polynomial n)
{
    int idx = 0;
    while (idx < n.size) if (n.number[idx++]) return idx - 1;
    return -1;
}

Polynomial wrapper(int _degree, int _size)
{
    Polynomial T;
    T.degree = _degree;
    T.size = _size;
    T.number = (int *) calloc(T.size, sizeof(int));
    for (int i = T.size - T.degree - 1; i < T.size; ++i) scanf("%d", &T.number[i]);
    return T;
}

Polynomial multiply(Polynomial a, Polynomial b)
{
    Polynomial T;
    int max_size = max(a.size, b.size);
    T.size = max_size * 2;
    T.number = (int *) calloc(T.size, sizeof(int));
    for (int i = max_size - 1; i >= 0; --i) for (int j = max_size - 1; j >= 0; --j) T.number[i + j + 1] += a.number[j] * b.number[i];
    T.degree = T.size - get_not_zero_idx(T);
    return T;
}

void test(Polynomial N) { for (int i = get_not_zero_idx(N); i < N.size; ++i) printf("%d ", N.number[i]); }

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    Polynomial A = wrapper(n, max(n, m) + 5);
    Polynomial B = wrapper(m, max(n, m) + 5);
    test(multiply(A, B));
    return 0;
}
