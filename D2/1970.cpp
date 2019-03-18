#include<stdio.h>
int T;
int N;
int num[8];                 // 50000, 10000, 5000, 1000, 500, 100, 50, 10
int money[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
int main() {
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t) {
		for (int i = 0; i < 8; ++i)
			num[i] = 0;						//init arr	
		scanf("%d", &N);
		for (int idx = 0; idx < 8; ++idx)
		{
			num[idx] = N / money[idx];
			N = N - num[idx] * money[idx];
		}
		printf("#%d\n", t);
		for (int i = 0; i < 8; ++i)
			printf("%d ", num[i]);
		printf("\n");
	}
	return 0;
}
