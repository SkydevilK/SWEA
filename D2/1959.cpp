#include<limits.h>                        //using INT_MAX
#include<stdio.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		int N, M;
		int max = -INT_MAX;                   // minus int max
		scanf("%d %d", &N, &M);
		int * Narr = new int[N];
		int * Marr = new int[M];
		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &Narr[i]);
		}
		for (int i = 0; i < M; ++i)
		{
			scanf("%d", &Marr[i]);
		}
		if (N < M)
		{
			for (int i = 0; i + N <= M; ++i)
			{
				int calc = 0;
				for (int j = 0; j < N; ++j)
				{
					calc += Narr[j] * Marr[i + j];
				}
				if (max < calc)
					max = calc;
			}
		}
		else if (N > M)
		{
			for (int j = 0; j + M <= N; ++j)
			{
				int calc = 0;
				for (int i = 0; i < M; ++i)
				{
					calc += Narr[i + j] * Marr[i];
				}
				if (max < calc)
					max = calc;
			}
		}
		else
		{
			for (int i = 0; i < M; ++i)
			{
				max += Narr[i] * Marr[i];
			}
		}

		printf("#%d %d\n", t, max);
		delete[] Narr;
		delete[] Marr;
	}
}
