#include <stdio.h>

int main()
{
    unsigned long long a = 0, b = 1;
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i)
    {
        unsigned long long tmp = a + b;
        a = b;
        b = tmp;
    }
    printf("%lld", b);
    return 0;
}
