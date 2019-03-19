#include<stdio.h>

int T;
int N;
int arr[10];
int count;
int num;
int main()
{
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		scanf("%d", &N);
    count = 0;
		num = 0;
		for (int i = 0; i < 10; ++i) arr[i] = 0;
		while (true)
		{
			int tempN = N * ++count;
			while (true)
			{
				if (arr[tempN % 10] == 0)
				{
					++arr[tempN % 10];
					++num;
				}
				if ((tempN /= 10) == 0)
					break;
			}
			if (num == 10) break;
			
		}
		printf("#%d %d\n", t, count*N);
	}
}
