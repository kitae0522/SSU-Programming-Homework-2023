#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N, R;
int prime_number_list[101010101];

void setup_prime_number_list(int number)
{
    for (int i = 2; i <= number; i++) prime_number_list[i] = i;
    for (int i = 2; i <= number; i++)
    {
        if (!prime_number_list[i]) continue;
        for (int j = 2 * i; j <= number; j += i) prime_number_list[j] = 0;
    }
}

int in339(int number)
{
    char tmp[7];
    sprintf(tmp, "%d", number);
    return strstr(tmp, "339") != NULL;
}

int main()
{
    scanf("%d", &N);
    setup_prime_number_list(N);
    for (int i = 2; i <= N; ++i) if (prime_number_list[i] && in339(i)) R++;
    printf("%d", R);
    return 0;
}

