#include<iostream>
#include<cstring>
using namespace std;
bool isPrime[1000001];
int main()
{
	memset(isPrime, true, sizeof(isPrime));
	for (int i = 2; i * i < 1000001; i++)
	{
		if (isPrime[i])
		{
			for (int j = 2 * i; j < 1000001; j += i)
				isPrime[j] = false;
		}
	}
	isPrime[1] = false;
	int testcase;
	cin >> testcase;
	for (int t = 1; t <= testcase; ++t)
	{
		int A, B, D, count = 0;
		cin >> D >> A >> B;
		for (int i = A; i <= B; i++) {
			if (isPrime[i])
			{
				int num = i;
				while (num != 0)
				{
					if (num % 10 == D)
					{
						count++;
						break;
					}

					num /= 10;
				}
			}

		}
		cout << "#" << t << " " << count << "\n";
	}
	return 0;
}
