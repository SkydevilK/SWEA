#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout.tie(NULL);	cin.tie(NULL);	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		unsigned long long int n;
		unsigned long long int sum = 0;
		cin >> n;
		sum = 0;
		while (true)
		{
			unsigned long long temp = n % 10;
			sum += temp;
			n /= 10;
			if (n == 0)
			{
				n = sum;
				if (n < 10)
					break;
				else
				{
					sum = 0;
					continue;
				}
			}
		}
		cout << "#" << testcase << " " << sum << "\n";
	}
	return 0;
}
