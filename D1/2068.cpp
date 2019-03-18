#include<stdio.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	int tempNum = 0;
	int Big = 0;
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &tempNum);
			if (tempNum > Big)
				Big = tempNum;
		}
		printf("#%d %d\n", i + 1, Big);
		Big = 0;
	}

}