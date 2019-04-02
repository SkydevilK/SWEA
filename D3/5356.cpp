#include<cstdio>
#include<cstring>
char str[5][16];
int main()
{
	int T = 0;
	int N = 0;
	int K = 0;
	int temp = 0;
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		memset(str, 0, sizeof(str));
		for (int i = 0; i < 5; ++i)
		{
			scanf("%s", str[i]);
		}
		printf("#%d ", t);
		for (int x = 0; x < 16; ++x)
			for (int y = 0; y < 5; ++y)
			{
				if (str[y][x] != 0)
					printf("%c", str[y][x]);
			}
		printf("\n");
	}
}
