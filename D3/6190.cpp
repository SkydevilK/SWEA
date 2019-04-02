#include<cstdio>
int A[1000];
int T;
int N;
int dan;
int checkNum = 0;
int refNum = 0;
int prevNum = 0;
bool isdan;
int main()
{
	scanf("%d", &T);
	for (int test = 1; test <= T; ++test)
	{
		dan = -1;
		scanf("%d", &N);
		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &A[i]);
		}
		for (int i = 0; i < N; ++i)
		{
			for (int j = i+1; j < N; ++j)
			{
				checkNum = A[i] * A[j];
				refNum = checkNum;
				isdan = true;
				prevNum = checkNum % 10;
				checkNum /= 10;
				while(true)
				{
					if (prevNum < checkNum % 10)
					{
						isdan = false;
						break;
					}
					else
					{
						prevNum = checkNum % 10;
						checkNum /= 10;
						if (checkNum / 10 == 0)
						{
							if (prevNum < checkNum % 10)
							{
								isdan = false;
							}
              break;
						}
					}
				}
				if (isdan)
				{
					if (dan < refNum)
						dan = refNum;
				}
			}
		}
		printf("#%d %d\n", test, dan);
	}
}
