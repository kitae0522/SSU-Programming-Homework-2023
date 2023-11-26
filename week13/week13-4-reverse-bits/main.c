#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int n, r;

int main()
{
    scanf("%u", &n);
    for (int i = 0; i < 32; ++i)
    {
        if (n & (1 << i)) r = (r << 1) + 1;
        else r <<= 1;
    }
    printf("%u", r);

    return 0;
}

