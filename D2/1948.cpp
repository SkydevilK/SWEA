#include<stdio.h>
int main()
{
	int T = 0;
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		int m1, d1, m2, d2;
		int count=1;
		scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
		while (!(m1 == m2 && d1 == d2))
		{
			++d1;
			++count;
			switch (m1)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				if (d1 > 31)
				{
					++m1;
					d1 = 1;
				}
				break;
			case 2:
				if (d1 > 28)
				{
					++m1;
					d1 = 1;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (d1 > 30)
				{
					++m1;
					d1 = 1;
				}
				break;
			}
		}
		printf("#%d %d\n", t, count);
	}
}
