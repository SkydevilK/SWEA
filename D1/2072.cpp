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
			if (tempNum % 2 == 1)
				total += tempNum;
		}
		printf("#%d %d\n", i + 1, total);
		total = 0;
	}

}