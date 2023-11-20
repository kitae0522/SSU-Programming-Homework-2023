#include <stdio.h>
#include <string.h>

void dec2oct(int dec_number, char *oct_result)
{
    int idx = 0;
    while (dec_number > 0)
    {
        int r = dec_number % 8;
        oct_result[idx++] = r + '0';
        dec_number /= 8;
    }
    oct_result[idx] = '\0';
}

int is_palindrome(char *string)
{
    int left = 0, right = strlen(string) - 1;
    int res = -1;
    while (left < right)
    {
        if (string[left] != string[right]) break;
        else res = 1;
        left++;
        right--;
    }
    return res;
}

int main()
{
    int number;
    char result[5050];
    scanf("%d", &number);
    dec2oct(number, result);
    printf("%s", is_palindrome(result) != -1 ? "True" : "False");
    return 0;
}

