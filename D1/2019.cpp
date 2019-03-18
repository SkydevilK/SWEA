#include<stdio.h>
int main()
{
	int N = 0;
	int temp = 1;
	scanf("%d", &N);
	for (int i = 0; i <= N; i++)
	{
		printf("%d ", temp);
		temp *= 2;
	}
}