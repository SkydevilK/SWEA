#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("#%d %d %d\n", i + 1, a / b, a%b);
	}
}