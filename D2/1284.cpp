#include<stdio.h>
int T;
int P, Q, R, S, W;
int cost;
int main()
{
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		scanf("%d %d %d %d %d", &P, &Q, &R, &S, &W);
		if (R < W)
		{
			cost = P * W < (Q + (W - R) * S) ? P * W : (Q + (W - R) * S);
		}
		else
		{
			cost = P * W < Q ? P * W : Q;
		}
		printf("#%d %d\n", t, cost);
	}
}
