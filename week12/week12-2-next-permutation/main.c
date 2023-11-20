// 참고한 것들
// 1. https://en.cppreference.com/w/cpp/algorithm/next_permutation
// 2. http://boj.kr/fed1fa65fb58429391cfceb03c95c261 (본인이 푼 문제)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[100];

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int next_permutation(int size)
{
    int i = size - 1;
    while (i > 0 && arr[i - 1] >= arr[i]) i--;
    if (i <= 0) return 0;

    int j = size - 1;
    while (arr[j] <= arr[i - 1]) j--;

    swap(&arr[i - 1], &arr[j]);

    j = size - 1;
    while (i < j) swap(&arr[i++], &arr[j--]);
    return 1;
}

int get_delimeter_count(char *str, char delimeter)
{
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; ++i) if (str[i] == delimeter) cnt++;
    return cnt;
}

int cmp(const void *a, const void *b) { return *(int *) a - *(int *) b; }

int main()
{
    char input[99999];
    scanf("%[^\n]s", input); getchar(); if (input[(int) strlen(input) - 1] == '\r') input[(int) strlen(input) - 1] = '\0';
    int size = get_delimeter_count(input, ',') + 1;
    char *token = strtok(input, ",");
    for (int i = 0; i < size; ++i) arr[i] = atoi(token), token = strtok(NULL, ",");
    if (!next_permutation(size)) qsort(arr, size, sizeof(int), cmp);
    for (int i = 0; i < size; i++) printf("%d%s", arr[i], i < size - 1 ? "," : "");
    return 0;
}

