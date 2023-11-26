#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

typedef struct
{
	int r;
	int c;
} Point;

Point S, E;
int A[30][30], V[30][30];
int N, M;
int R = 1e9;

void dfs(Point x, int k)
{
	int cx = x.r, cy = x.c;
	if (cx == E.r && cy == E.c)
	{
		if (R > k) R = k;
		return;
	}

	for (int i=0; i<4; ++i)
	{
		int nx = cx + dx[i];
		int ny = cy + dy[i];
		if (!A[nx][ny] && !V[nx][ny] && 0 <= nx && nx < N && 0 <= ny && ny < M)
		{
			V[nx][ny] = 1;
			dfs((Point){nx, ny}, k + 1);
			V[nx][ny] = 0;
		}
	}
}

int main()
{
	scanf("%d %d", &N , &M);
	for (int i=0; i<N; ++i)
	{
		char x[31];
		scanf("%s", x);
		for (int j=0; j<M; ++j) A[i][j] = x[j] - '0';
	}
	scanf("%d %d %d %d", &S.r, &S.c, &E.r, &E.c);
	S.r -= 1, S.c -= 1;
	E.r -= 1, E.c -= 1;
	V[S.r][S.c] = 1;
	dfs(S, 1);
	printf("%d\n", R);
	return 0;
}
