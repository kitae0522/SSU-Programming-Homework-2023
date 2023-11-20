#include <stdio.h>
#include <stdlib.h>

int bin2gray(int N) { return N ^ (N >> 1); }

int *gray2bin(int N)
{
    int idx = 0;
    int *z = (int *) malloc(sizeof(int) * 32);
    while (N > 0)
    {
        z[idx++] = N % 2;
        N /= 2;
    }
    z[idx] = 99;
    return z;
}

int main()
{
    int n, k; scanf("%d", &n);
    int *z = gray2bin(bin2gray(n));
    for (int i = 0; i < 32; ++i) if (z[i] == 99) k = i;
    for (int i = k - 1; i >= 0; --i) printf("%d", z[i]);
    return 0;
}
