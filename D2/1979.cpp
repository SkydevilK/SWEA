#include <iostream>
#include <string.h>
using namespace std;
int Check(int** map, int startX, int startY, int N, int K)
{
	int wordNum = 0;
	int count = 0;
	if (startX + K <= N && (startX == 0 || (startX > 0 && map[startY][startX - 1] == 0)))
	{
		for (int x = startX; x < N; ++x)
		{
			if (map[startY][x] == 1)
			{
				++count;
			}
			else
			{
				if (count == K)
				{
					++wordNum;
				}
				break;
			}
			if (count > K)
				break;
			if (x == N - 1 && count == K)
				++wordNum;

		}
	}
	count = 0;
	if (startY + K <= N && (startY == 0 || (startY > 0 && map[startY - 1][startX] == 0)))
		for (int y = startY; y < N; ++y)
		{
			if (map[y][startX] == 1)
			{
				++count;
			}
			else
			{
				if (count == K)
				{
					++wordNum;
				}
				break;
			}
			if (count > K)
				break;
			if (y == N - 1 && count == K)
				++wordNum;

		}
	return wordNum;
}
int main(void) {
	int T = 0;
	scanf("%d", &T);
	for (int loop = 1; loop <= T; ++loop)
	{
		int N, K;
		bool isCheck = false;
		int wordNum = 0;
		scanf("%d %d", &N, &K);
		int** arr = new int*[N];
		for (int i = 0; i < N; i++)
		{
			arr[i] = new int[N];
			memset(arr[i], 0, sizeof(int)*N);
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}
		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
			{
				if (arr[y][x] == 1)
				{
					wordNum += Check(arr, x, y, N, K);
				}
			}
		}
		printf("#%d %d\n", loop, wordNum);


		for (int i = 0; i < N; ++i)
		{
			delete[] arr[i];
		}
		delete[] arr;

	}

}