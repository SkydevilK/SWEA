#include<cstdio>
int x1, x2, y1, y2, N, T, x, y, in, out, safe;
int main()
{
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		in = out = safe = 0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &N);
		for (int i = 0; i < N; ++i)
		{
			scanf("%d %d", &x, &y);
			if ((x1 < x) && (x < x2) && (y1 < y) && (y < y2))
				++in;
			else if (x < x1 || x2 < x || y < y1 || y2 < y)
				++out;
			else
				++safe;
		}
		printf("#%d %d %d %d\n", t, in, safe, out);
	}
}
