#include<cstdio>
int N;
int M;
int T;
int number;
int max;
int count;
int temp;
int main()
{
	scanf("%d", &T);
	for (int test_case = 1; test_case <= T; ++test_case)
	{
		max = 0;
        number = 0;
		scanf("%d %d", &N, &M);
		for (int i = 0; i < N; ++i)
		{
			count = 0;
			for (int j = 0; j < M; ++j)
			{
				scanf("%d", &temp);
				if (temp == 1)
					++count;
			}
			if (max < count)
			{
				number = 1;
				max = count;
			}
			else if (max == count)
			{
				++number;
			}
		}
		if (number != 0)
			printf("#%d %d %d\n", test_case, number, max);
		else
			printf("#%d %d %d\n", test_case, N, max);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
