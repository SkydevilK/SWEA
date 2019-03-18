#include<stdio.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		int N = 0;
		long long total = 0;
		int big = 0;
		scanf("%d", &N);
		int* arr = new int[N + 1];
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &arr[j]);
		}
		big = arr[N - 1];
		for (int j = N - 2; j >= 0; j--)
		{
			if (big > arr[j])
				total += big - arr[j];
			else
			{
				big = arr[j];
			}
		}
		printf("#%d %lld\n", i, total);
		delete[] arr;
	}
}