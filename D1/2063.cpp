#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

	int N = 0;
	scanf("%d", &N);
	int *arr = new int[N];
	int tempNum = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &tempNum);
		arr[i] = tempNum;
	}
	sort(arr, arr + N);
	printf("%d", arr[N / 2]);

}