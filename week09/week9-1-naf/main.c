#include <stdio.h>
#include <stdlib.h>

/**
Input     E = (em−1 em−2 ··· e1 e0)2
Output     Z = (zm zm−1 ··· z1 z0)NAF

Logic:
   i ← 0
   while E > 0 do
       if E is odd then
           zi ← 2 − (E mod 4)
           E ← E − zi
       else
           zi ← 0
       E ← E/2
       i ← i + 1
   return z
 */

int *convert_naf(int n)
{
    int *z = (int *) malloc(sizeof(int) * 32);
    int idx = 0;
    while (n > 0)
    {
        if (n % 2) z[idx] = 2 - (n % 4), n -= z[idx++];
        else z[idx++] = 0;
        n /= 2;
    }
    z[idx] = 99;
    return z;
}

int main()
{
    int N, K = 0;
    scanf("%d", &N);
    int *A = convert_naf(N);
    for (int i = 0; i < 32; ++i) if (A[i] == 99) K = i;
    for (int i = K - 1; i >= 0; --i) printf("%d ", A[i]);
    return 0;
}
