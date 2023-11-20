#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int sign;
    int *number;
    int size_of_number;
    int real_size;
} BigInt;

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }
void swap(int *a, int *b) { int t = *a; *a = *b; *b = t; }
void struct_swap(BigInt *a, BigInt *b) { BigInt t = *a; *a = *b; *b = t; }
void struct_copy(BigInt *a, BigInt *b) { a->sign = b->sign; a->number = b->number; a->size_of_number = b->size_of_number; a->real_size = b->real_size; }
int get_max_number_size(int size_n1, int size_n2) { return size_n1 >= size_n2 ? size_n1 : size_n2; }

void debug(BigInt N)
{
    printf("sign: %d | size: %d | real: %d\n", N.sign, N.size_of_number, N.real_size);
    for (int i = 0; i < N.size_of_number; ++i) printf("%d", N.number[i]);
    printf("\n");
}

int get_not_zero_idx(BigInt n)
{
    int idx = 0;
    while (idx < n.size_of_number) if (n.number[idx++]) return idx - 1;
    return -1;
}

int get_max_number(BigInt a, BigInt b)
{
    int mx_size = a.size_of_number;
    int aorb = 0;
    for (int i = mx_size - 1; i >= 0; --i)
        if (a.number[i] || b.number[i])
            aorb = a.number[i] >= b.number[i] ? a.number[i] == b.number[i] ? 0 : 1 : -1;
    return aorb;
}

int get_number_sign(BigInt a, BigInt b)
{
    int mx_size = a.size_of_number;
    int sign = 0;
    for (int i = mx_size - 1; i >= 0; --i)
    {
        if (a.number[i] > b.number[i]) sign = 1;
        else if (a.number[i] < b.number[i]) sign = -1;
    }
    if (sign == 1) return a.sign;
    return b.sign;
}

BigInt wrapper(const char *string_number, int size)
{
    BigInt T;
    int size_of_string = strlen(string_number);
    T.sign = string_number[0] != '-' ? 1 : -1;
    T.number = (int *) calloc(size, sizeof(int));
    T.size_of_number = size;

    int idx = 0;
    while (string_number[idx] != '\0')
    {
        char n = string_number[size_of_string - idx - 1];
        if ('0' <= n && n <= '9') T.number[T.size_of_number - idx - 1] = n - '0';
        idx++;
    }
    T.real_size = get_not_zero_idx(T) != -1 ? T.size_of_number - get_not_zero_idx(T) : 0;
    return T;
}

BigInt add(BigInt a, BigInt b)
{
    int flag = 0;
    int max_number = get_max_number(a, b);
    if (max_number == -1 && a.sign != -1) struct_swap(&a, &b), swap(&a.sign, &b.sign), flag = 1;

    BigInt T;
    int max_size = get_max_number_size(a.size_of_number, b.size_of_number);
    T.size_of_number = max_size;
    T.number = (int *) calloc(T.size_of_number, sizeof(int));
    int size = 0, sum = 0, carry = 0;
    for (int i = max_size - 1; i >= max_size - min(a.real_size, b.real_size); --i)
    {
        int a_i = a.sign * a.number[i];
        int b_i = b.sign * b.number[i];
        sum = a_i + b_i + carry;
        if (a.sign != b.sign)
        {
            if (sum < 0) carry = -1, sum += 10;
            else carry = sum / 10, sum %= 10;
        }
        else carry = sum / 10, sum %= 10;
        T.number[i] = abs(sum);
        size++;
    }
    for (int i = max_size - min(a.real_size, b.real_size) - 1; i >= 0; --i)
    {
        if (min(a.real_size, b.real_size) == a.real_size) T.number[i] = b.number[i] + b.sign * carry;
        else T.number[i] = a.number[i] + a.sign * carry;

        if (T.number[i] < 0) carry = -1, T.number[i] += 10;
        else carry = T.number[i] / 10, T.number[i] %= 10;
    }
    if (flag) swap(&a.sign, &b.sign);
    T.sign = get_not_zero_idx(T) != -1 ? get_number_sign(a, b) : 0;
    T.real_size = get_not_zero_idx(T) != -1 ? T.size_of_number - get_not_zero_idx(T) : 0;
    return T;
}

void test(BigInt N)
{
    if (N.sign == -1) printf("-");
    for (int i = get_not_zero_idx(N) == -1 ? N.size_of_number - 1 : get_not_zero_idx(N);
         i < N.size_of_number; ++i)
        printf("%d", N.number[i]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    BigInt A = wrapper("0", 999);
    BigInt B = wrapper("1", 999);
    for (int i = 2; i <= n; ++i)
    {
        BigInt T = add(A, B);
        struct_copy(&A, &B);
        struct_copy(&B, &T);
    }
    test(B);
    return 0;
}
