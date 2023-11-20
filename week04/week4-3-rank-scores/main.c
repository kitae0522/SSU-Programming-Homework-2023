#include <stdio.h>

int score_arr[1001], rank_arr[1001];

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; ++i) scanf("%d", &score_arr[i]);
    for (int i = 0; i < num; ++i) for (int j = 0; j < num; ++j) if (score_arr[j] > score_arr[i]) rank_arr[i]++;
    for (int i = 0; i < num; ++i) printf("%d ", rank_arr[i] + 1);
    return 0;
}
