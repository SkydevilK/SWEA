#include<iostream>
#include<algorithm>
using namespace std;
int prime[1000];
int primeNum;
int T;
int N;
int _count;
void GetPrime()
{
	int arr[1000] = { 0 };
	for (int i = 2; i <= 999; i++)
	{
		arr[i] = i;
	}
	for (int i = 2; i <= 999; i++) {
		for (int j = 2; j <= 999; j++) {
			if (arr[j] != i && arr[j] % i == 0) {
				arr[j] = 0;
			}
		}
	}
	for (int i = 2; i <= 999; i++) {
		if (arr[i] != 0)
		{
			prime[primeNum++] = i;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
    GetPrime();
	for (int test = 1; test <= T; ++test)
	{
		bool isLoop = true;
		_count = 0;
		cin >> N;
		for (int i = 0; i < primeNum; ++i)
		{
			for (int j = i; j < primeNum; ++j)
			{
				for (int k = j; k < primeNum; ++k)
				{
					if (N == prime[i] + prime[j] + prime[k])
						++_count;
					else if (N < prime[i] + prime[j] + prime[k])
						break;
				}
				if (N < prime[i] + prime[j])
					break;
			}
			if (N < prime[i])
				break;
		}
		cout << "#" << test << " " << _count << "\n";
	}
}
