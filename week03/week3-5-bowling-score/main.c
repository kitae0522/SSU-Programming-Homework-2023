#include <stdio.h>

int arr[11][3];
int result;

int main()
{
    for (int i = 1; i < 10; ++i) scanf("%d %d", &arr[i][0], &arr[i][1]);
    scanf("%d %d %d", &arr[10][0], &arr[10][1], &arr[10][2]);

    for (int i = 1; i < 10; ++i)
    {
        int record_sum = arr[i][0] + arr[i][1];
        if (record_sum == 10)
        {
            if (arr[i][0] == 10)
                record_sum += (arr[i + 1][0] != 10) || (i == 9) ?
                              arr[i + 1][0] + arr[i + 1][1] :
                              arr[i + 1][0] + arr[i + 2][0];
            else
                record_sum += arr[i + 1][0];
        }
        result += record_sum;
//        printf("# for debug: %d -> %d\n", i, record_sum);
    }
    result += arr[10][0] + arr[10][1] + arr[10][2];
    printf("%d", result);

    return 0;
}
