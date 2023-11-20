#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef long long ll;
ll number_arr[99999];
ll set[99999];

int binary_search(ll *arr, ll key, int size)
{
    int find = -1;
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            find = 1;
            break;
        }
        else if (arr[mid] > key) right = mid - 1;
        else if (arr[mid] < key) left = mid + 1;
    }
    return find;
}

char *string_slice(const char *string, int start, int end)
{
    int size = 0;
    char *new_string = (char *) malloc(sizeof(char) * (end - start + 1));
    for (int i = start; i < end; ++i) new_string[i - start] = string[i], size++;
    new_string[size] = '\0';
    return new_string;
}

int cmp(const void *a, const void *b)
{
    ll num1 = *(int *) a;
    ll num2 = *(int *) b;
    if (num1 < num2) return -1;
    if (num1 > num2)return 1;
    return 0;
}

ll convert_string2ll(const char *string)
{
    int sign = string[0] == '-' ? -1 : 1;
    ll new_number = 0;
    for (int i = 0; i < strlen(string); ++i)
    {
        if ('0' <= string[i] && string[i] <= '9')
        {
            new_number *= 10;
            new_number += string[i] - '0';
        }
    }
    return new_number * sign;
}

int main()
{
    char input[99999];
    int idx = 0, last_end = -1, size = 0, set_size = 0;
    scanf("%[^\n]s", input);

    while (input[idx++] != '\0')
    {
        int start = idx - 1, end = last_end;
        for (int i = start; i < strlen(input); ++i)
        {
            if (input[i] == ' ') break;
            else end = i;
        }
        if (last_end == end) continue;
        char *number_string = string_slice(input, start, end + 1);
        number_arr[size++] = convert_string2ll(number_string);
        last_end = end;
    }
    qsort(number_arr, size, sizeof(ll), cmp);
    for (int i = 0; i < size; ++i)
        if (binary_search(set, number_arr[i], set_size) == -1)
            set[set_size++] = number_arr[i];
    for (int i = 0; i < set_size; ++i)
    {
        printf("%lld", set[i]);
        if (i != set_size - 1) printf(", ");
    }

    return 0;
}

