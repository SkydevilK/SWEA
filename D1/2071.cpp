#include<stdio.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	int tempNum = 0;
	int total = 0;
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &tempNum);
			total += tempNum;
		}

		printf("#%d %.0f\n", i + 1, (float)total / (float)10);
		total = 0;
	}

}