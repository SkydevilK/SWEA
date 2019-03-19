#include<stdio.h>

int T;
int N;
int arr[5] = { 2,3,5,7,11 };      // Fractional decomposition
int answer[5] = { 0 };
int main()
{
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		scanf("%d", &N);
		for (int i = 0; i < 5; ++i)
		{
			while (N % arr[i] == 0)
			{
				N /= arr[i];
				++answer[i];
			}
		}
		printf("#%d ", t);
		for (int i = 0; i < 5; ++i)
		{
			printf("%d ", answer[i]);
			answer[i] = 0;
		}
		printf("\n");
	}
}
