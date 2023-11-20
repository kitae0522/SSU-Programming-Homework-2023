#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **make_array(int r, int c)
{
    int **new_mat = (int **) malloc(sizeof(int *) * r);
    for (int i = 0; i < r; ++i) new_mat[i] = (int *) malloc(sizeof(int) * c);
    for (int i = 0; i < r; ++i) memset(new_mat[i], 0, sizeof(int) * c);
    return new_mat;
}

int get_power_of_2(int n)
{
    int i = 0;
    while((n = n >> 1)) ++i;
    return i;
}

void print_matrix(int **mat)
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%c", mat[i][j] ? (int) get_power_of_2(mat[i][j]) + 'A' - 1 : '.');
        }
        printf("\n");
    }
}

void add_new_value(int **mat, int r, int c, int v)
{
    mat[r][c] = v;
}

int **reverse(int **mat)
{
    int **new_mat = make_array(4, 4);
    for (int i = 0; i < 4; ++i) for (int j = 0; j < 4; ++j) new_mat[i][j] = mat[i][4 - j - 1];
    return new_mat;
}

int **transpose(int **mat)
{
    int **new_mat = make_array(4, 4);
    for (int i = 0; i < 4; ++i) for (int j = 0; j < 4; ++j) new_mat[i][j] = mat[j][i];
    return new_mat;
}

int **merge(int **mat)
{
    int **new_mat = make_array(4, 4);
    for (int i = 0; i < 4; ++i) for (int j = 0; j < 4; ++j) new_mat[i][j] = mat[i][j];

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (new_mat[i][j] == new_mat[i][j + 1] && new_mat[i][j])
            {
                new_mat[i][j] *= 2;
                new_mat[i][j + 1] = 0;
            }
        }
    }
    return new_mat;
}

int **compress(int **mat)
{
    int **new_mat = (int **) malloc(sizeof(int *) * 4);
    for (int i = 0; i < 4; ++i) new_mat[i] = (int *) malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; ++i) memset(new_mat[i], 0, sizeof(int) * 4);
    for (int i = 0; i < 4; ++i)
    {
        int pos = 0;
        for (int j = 0; j < 4; ++j)
        {
            if (mat[i][j]) new_mat[i][pos++] = mat[i][j];
        }
    }
    return new_mat;
}

int **move_left(int **mat)
{
    int **new_mat = compress(mat);
    new_mat = merge(new_mat);
    new_mat = compress(new_mat);
    return new_mat;
}

int **move_right(int **mat)
{
    int **new_mat = reverse(mat);
    new_mat = move_left(new_mat);
    new_mat = reverse(new_mat);
    return new_mat;
}

int **move_up(int **mat)
{
    int **new_mat = transpose(mat);
    new_mat = move_left(new_mat);
    new_mat = transpose(new_mat);
    return new_mat;
}

int **move_down(int **mat)
{
    int **new_mat = transpose(mat);
    new_mat = reverse(new_mat);
    new_mat = move_left(new_mat);
    new_mat = reverse(new_mat);
    new_mat = transpose(new_mat);
    return new_mat;
}

int main()
{
    int T;
    scanf("%d", &T);
    int **map = make_array(4, 4);
    for (int i = 0; i < 4; ++i)
    {
        char value[5];
        scanf(" %s", value);
        for (int j = 0; value[j] != '\0'; ++j)
        {
            if (value[j] != '.') map[i][j] = (map[i][j] + 1) << (int) (value[j] - 'A' + 1);
        }
    }
    while(T--)
    {
        char dir, val;
        int pos;
        scanf(" %c %d %c", &dir, &pos, &val);
        if (dir == 'N') map = move_up(map);
        else if (dir == 'S') map = move_down(map);
        else if (dir == 'W') map = move_left(map);
        else if (dir == 'E') map = move_right(map);
        add_new_value(map, pos / 4, pos % 4, 1 << (int) (val - 'A' + 1));
//        print_matrix(map);
    }
    print_matrix(map);
    return 0;
}
