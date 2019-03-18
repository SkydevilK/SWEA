#include<stdio.h>
#include<algorithm>
int arr[10];
int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		int total = 0;
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &arr[j]);
		}
		std::sort(arr, arr + 10);
		for (int j = 1; j < 9; j++)
		{
			total += arr[j];
		}
		printf("#%d %.0f\n", i, (float)total / (float)8);
	}
}