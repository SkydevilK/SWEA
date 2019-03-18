#include<stdio.h>
int arr[10];
int main()
{
	int t;
	int sign = -1;
	arr[0] = 1;
	for (int j = 2; j <= 10; j++)
	{
		arr[j - 1] = arr[j - 2] + sign * j;
		sign *= -1;
	}
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		int N;
		int total = 0;
		scanf("%d", &N);
		printf("#%d %d\n", i, arr[N - 1]);
	}
}