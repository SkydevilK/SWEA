#include<stdio.h>
int main()
{
	int N = 0;
	bool ischeck = false;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		int num = i;
		while (true)
		{
			if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9)
			{
				ischeck = true;
				printf("-");
			}
			num /= 10;
			if (num / 10 == 0)
			{
				if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9)
				{
					ischeck = true;
					printf("-");
				}
				if (!ischeck) {
					printf("%d", i);
				}
				ischeck = false;
				printf(" ");
				break;
			}
		}
	}
}