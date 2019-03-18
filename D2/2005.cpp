#include<stdio.h>
int main()
{
	int T = 0;
	int N = 0;
	int arr[10][10] = { 1 };
	scanf("%d", &T);
	for (int i = 1; i < 10; i++)
	{
		arr[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			if (j != i)
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			else
				arr[i][j] = 1;
		}
	}

	for (int i = 1; i <= T; i++)
	{
		scanf("%d", &N);
		printf("#%d\n", i);
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
}