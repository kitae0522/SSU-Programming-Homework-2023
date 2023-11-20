#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 20

typedef struct
{
    int x;
    int y;
} Point;

const int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
const int dy[8] = {0, 0, -1, 1, -1, 1, -1, 1};

int max_row, max_col;
char map[MAX_SIZE + 1][MAX_SIZE + 1];

void str_upper(char *str) { for (int i = 0; str[i] != '\0'; ++i) if ('a' <= str[i] & str[i] <= 'z') str[i] += ('A' - 'a'); }
int is_valid(Point p) { return (0 <= p.x && p.x < max_row && 0 <= p.y && p.y < max_col); }
Point wrapper(int x, int y) { return (Point){x, y}; }

Point *graph_search(char *word, int *flag, Point curr_point)
{
    Point *result = (Point *) malloc(sizeof(Point) * 2);
    for (int i = 0; i < 2; ++i) result[i] = wrapper(-1, -1);

    if (map[curr_point.x][curr_point.y] != word[0]) return result;
    for (int dir = 0; dir < 8; ++dir)
    {
        int cnt = 1;
        Point new_point = wrapper(curr_point.x, curr_point.y);
        for (int i = 1; i < strlen(word); ++i)
        {
            new_point.x += dx[dir];
            new_point.y += dy[dir];
            if (!is_valid(new_point) || map[new_point.x][new_point.y] != word[i]) break;
            cnt++;
        }
        if (cnt == strlen(word))
        {
            *flag = 1;
            result[0] = wrapper(curr_point.x, curr_point.y);
            result[1] = wrapper(new_point.x, new_point.y);
            return result;
        }
    }
}

void run(char *word)
{
    int flag = 0;
    Point *result;
    for (int i = 0; i < max_row; ++i)
    {
        for (int j = 0; j < max_col; ++j)
        {
            Point point = wrapper(i, j);
            if (!flag) result = graph_search(word, &flag, point);
        }
    }
    for (int i = 0; i < 2; ++i)
    {
        printf("%d,%d\n", result[i].x, result[i].y);
        if (!flag) return;
    }
}


int main(int argc, char *argv[])
{
    FILE *file = fopen(argv[1], "r");
    int cnt = 0;
    char input[MAX_SIZE + 1], line[MAX_SIZE + 1];
    scanf("%[^\n]s", input); getchar(); if (input[(int) strlen(input) - 1] == '\r') input[(int) strlen(input) - 1] = '\0'; str_upper(input);
    while (!feof(file))
    {
        fgets(line, MAX_SIZE + 1, file);
        if (line[(int) strlen(line) - 1] == '\n') line[(int) strlen(line) - 1] = '\0';
        strcpy(map[cnt++], line);
    }
    max_row = strlen(line), max_col = cnt;
    run(input);

    return 0;
}
