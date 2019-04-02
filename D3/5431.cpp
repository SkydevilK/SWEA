#include<cstdio>
#include<cstring>
bool check[102];
int main()
{
	int T = 0;
	int N = 0;
	int K = 0;
	int temp = 0;
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		scanf("%d %d", &N, &K);
		memset(check, 0, sizeof(check));
		for (int i = 0; i < K; ++i)
		{
			scanf("%d", &temp);
			check[temp] = true;
		}
		printf("#%d ", t);
		for (int i = 1; i <= N; ++i)
		{
			if (!check[i])
				printf("%d ", i);
		}
		printf("\n");
	}
}
