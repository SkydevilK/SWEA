#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int T;
int N;
int count;
int min = INT_MAX;
int tempNum;
int absNum;
int main()
{
	scanf(" %d", &T);
	for (int t = 1; t <= T; ++t)
	{
    min = INT_MAX;
		scanf(" %d", &N);
		for (int i = 0; i < N; ++i)
		{
			scanf(" %d", &tempNum);
			absNum = abs(tempNum);
			if (absNum < min)
			{
				count = 1;
				min = absNum;
			}
			else if (absNum == min)
			{
				++count;
			}
		}
		printf("#%d %d %d\n", t, min, count);
	}
}
