#include<stdio.h>
#include<string.h>
enum DIR { RIGHT, LEFT, UP, DOWN };           //dir
int main()
{
	int T = 0;
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		int N;
		DIR dir = RIGHT;
		int x = 0, y = 0,xlimit = 0,ylimit = 0;  
		scanf("%d", &N);
		int** arr = new int*[N];
		for (int i = 0; i < N; ++i)
		{
			arr[i] = new int[N];
			memset(arr[i], 0, sizeof(int)*N);
		}
		for (int loop = 1; loop <= N*N; ++loop)
		{
			arr[y][x] = loop;
			switch (dir)
			{
			case RIGHT:
				if (x < N-1+ xlimit)
				{
					++x;
				}
				else
				{
					++y;
					dir = DOWN;
				}
				break;
			case LEFT:
				if (x > 0-xlimit)
				{
					--x;
				}
				else
				{
					--y;
					--ylimit;
					dir = UP;
				}
				break;
			case UP:
				if (y >0-ylimit)
				{
					--y;
				}
				else
				{
					++x;
					--xlimit;
					dir = RIGHT;
				}
				break;
			case DOWN:
				if (y < N-1+ylimit)
				{
					++y;
				}
				else
				{
					--x;
					dir = LEFT;
				}
				break;
			}
		}
		printf("#%d\n", t);
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		for (int i = 0; i < N; ++i)
		{
			delete[] arr[i];
		}
		delete[] arr;
	}
}
