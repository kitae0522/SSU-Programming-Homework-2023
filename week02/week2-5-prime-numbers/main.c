#include <stdio.h>

int prime_number_list[1000001];

void setup_prime_number_list(int number)
{
    for (int i = 2; i <= number; i++) prime_number_list[i] = i;
    for (int i = 2; i <= number; i++)
    {
        if (!prime_number_list[i]) continue;
        for (int j = 2 * i; j <= number; j += i) prime_number_list[j] = 0;
    }
}

int main()
{
    int N, R = 0;
    scanf("%d", &N);
    setup_prime_number_list(N);
    for (int i = 2; i <= N; i++) if (prime_number_list[i]) R += prime_number_list[i];
    printf("%d\n", R);
    return 0;
}
