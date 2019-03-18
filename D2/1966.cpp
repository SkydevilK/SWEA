#include<stdio.h>
#include<algorithm>           //using sort function
int T;
int N;
int main()
{
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		int arr[51];
		scanf("%d", &N);
		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &arr[i]);
        }
		std::sort(arr, arr+N);
		printf("#%d", t);
		for (int i = 0; i < N; ++i)
		{
			printf(" %d", arr[i]);
		}
		printf("\n");
	}
}
