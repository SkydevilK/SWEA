#include <stdio.h>

int main()
{
	int T;										//Test Case
	scanf("%d", &T);
	for (int loop = 1; loop <= T; ++loop)
	{
		int h1, h2, m1, m2;							
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		m1 += m2;
		if (m1 >= 60)							// 60second -> 1hours
		{
			m1 -= 60;
			++h1;
		}
		h1 += h2;
		if (h1 > 12)							// 13hours -> 1hours
		{
			h1 -= 12;
		}
		printf("#%d %d %d\n", loop, h1, m1);
	}
}
