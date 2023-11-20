#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 9
#define SQRT_MAX_SIZE 3

int get_delimeter_count(char *str, char delimeter)
{
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; ++i) if (str[i] != delimeter) cnt++;
    return cnt;
}

char *string_split_join(char *str, char delimeter)
{
    int idx = 0;
    int delimeter_cnt = get_delimeter_count(str, delimeter);
    char *new_string = (char *) malloc(sizeof(char) * (delimeter_cnt + 1));
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == delimeter) continue;
        new_string[idx++] = str[i];
    }
    new_string[idx] = '\0';
    return new_string;
}

int *string_to_int_arr(char *str)
{
    int len_str = strlen(str);
    int *new_arr = (int *) malloc(sizeof(int) * len_str);
    memset(new_arr, 0, sizeof(int) * len_str);
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if ('0' <= str[i] && str[i] <= '9') new_arr[i] = str[i] - '0';
    }
    return new_arr;
}

int check_1x9_arr(int board[MAX_SIZE])
{
    int *check_arr = (int *) malloc(sizeof(int) * MAX_SIZE);
    memset(check_arr, 0, sizeof(int) * MAX_SIZE);
    for (int i = 0; i < MAX_SIZE; ++i) board[i] ? check_arr[board[i] - 1]++ : 0;
    for (int i = 0; i < MAX_SIZE; ++i) if (check_arr[i] > 1) return 0;
    return 1;
}

int check_3x3_arr(int board[SQRT_MAX_SIZE][SQRT_MAX_SIZE])
{
    int *check_arr = (int *) malloc(sizeof(int) * MAX_SIZE);
    memset(check_arr, 0, sizeof(int) * MAX_SIZE);
    for (int i = 0; i < 3; ++i) for (int j = 0; j < 3; ++j) board[i][j] ? check_arr[board[i][j] - 1]++ : 0;
    for (int i = 0; i < MAX_SIZE; ++i) if (check_arr[i] > 1) return 0;
    return 1;
}

int main()
{
    int **sudoku = (int **) malloc(sizeof(int *) * MAX_SIZE);
    for (int i = 0; i < MAX_SIZE; ++i)
    {
        char line[33];
        scanf("%s", line);
        sudoku[i] = string_to_int_arr(string_split_join(line, ','));
    }
    for (int i = 0; i < MAX_SIZE; ++i)
    {
        int *vertical = sudoku[i];
        int horizontal[MAX_SIZE];
        for (int j = 0; j < MAX_SIZE; ++j) horizontal[j] = sudoku[j][i];

        if (!check_1x9_arr(vertical) || !check_1x9_arr(horizontal))
        {
            printf("false");
            return 0;
        }
    }
    for (int i = 0; i < MAX_SIZE; i += 3)
    {
        for (int j = 0; j < MAX_SIZE; j += 3)
        {
            int subarray[SQRT_MAX_SIZE][SQRT_MAX_SIZE];
            for (int x = 0; x < SQRT_MAX_SIZE; ++x)
                for (int y = 0; y < SQRT_MAX_SIZE; ++y)
                    subarray[x][y] = sudoku[i + x][j + y];
            if (!check_3x3_arr(subarray))
            {
                printf("false");
                return 0;
            }
        }
    }
    printf("true");

    return 0;
}
