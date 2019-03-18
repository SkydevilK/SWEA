#include<stdio.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	int A = 0;
	int B = 0;
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		if (A < B)
		{
			printf("#%d <\n", i + 1);
		}
		else if (A > B)
		{
			printf("#%d >\n", i + 1);
		}
		else		printf("#%d =\n", i + 1);

	}

}