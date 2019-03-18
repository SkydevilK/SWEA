#include<stdio.h>
#include<string.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	for (int test = 1; test <= T; ++test)
	{
		int N, M;
		int max = 0;
		int temp = 0;
		scanf("%d %d", &N, &M);
		int **arr = new int*[N];
		for (int i = 0; i < N; ++i)
		{
			arr[i] = new int[N];
			memset(arr[i], 0, sizeof(int)*N);
		}
		for (int i = 0; i < N; ++i)
			for (int j = 0; j < N; ++j)
				scanf("%d", &arr[i][j]);
		for (int i = 0; i + M <= N; ++i)
			for (int j = 0; j + M <= N; ++j)
			{
				for (int m = i; m < i + M; ++m)
				{
					for (int n = j; n < j + M; ++n)
					{
						temp += arr[m][n];
					}
				}
				if (max < temp)
					max = temp;
				temp = 0;
			}
		printf("#%d %d\n", test, max);
		for (int i = 0; i < N; ++i)
		{
			delete[] arr[i];
		}
		delete[] arr;
	}
}