#include<iostream>
#include<string>
using namespace std;
int main()
{
	int T = 0;
	bool check = false;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		string arr;
		cin >> arr;
		for (int j = 1; j < arr.length(); j++)
		{
			if (arr.substr(0, j) == arr.substr(j, j))
			{
				if (arr.substr(j, j) == arr.substr(j * 2, j))
				{
					printf("#%d %d\n", i, j);
					break;
				}
			}
		}
	}
}