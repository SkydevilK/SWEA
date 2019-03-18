#include<iostream>
#include<string.h>
#include<string>
int main()
{
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		int N;
		scanf("%d", &N);
		int** arr = new int*[N];
		for (int i = 0; i < N; ++i)
		{
			arr[i] = new int[N];
			memset(arr[i], 0, sizeof(int)*N);           //init arr
		}
		std::string** solution = new std::string*[N];
		for (int i = 0; i < N; ++i)
		{
			solution[i] = new std::string[N];
		}
		for (int y = 0; y < N; ++y)
		{
			for (int x = 0; x < N; ++x)
			{
				scanf("%d", &arr[y][x]);
			}
		}
		for (int x = 0; x < N; ++x)
		{
			for (int y = 0; y < N; ++y)
			{
				solution[x][0].insert(solution[x][0].begin(),('0'+arr[y][x]));  // insert 90 degree
			}
		}
		for (int x = 0; x < N; ++x)
		{
			for (int y = 0; y < N; ++y)
			{
				solution[N - x - 1][1].insert(solution[N - x - 1][1].begin(), ('0' + arr[x][y])); // insert 180 degree
			}
		}
		for (int x = 0; x < N; ++x)
		{
			for (int y = N - 1; y >= 0; --y)
			{
				solution[N - x - 1][2].insert(solution[N - x - 1][2].begin(), ('0' + arr[y][x])); // insert 270 degree
			}
		}
		printf("#%d\n", t);
		for (int y = 0; y < N; ++y)
		{
			for (int x = 0; x < 3; ++x)
			{
				std::cout << solution[y][x] << " ";
			}
			printf("\n");
		}
		for (int i = 0; i < N; ++i)
		{
			delete[] arr[i];
		}
		delete[] arr;
		for (int i = 0; i < N; ++i)
		{
			delete[] solution[i];
		}
		delete[] solution;
	}
}
