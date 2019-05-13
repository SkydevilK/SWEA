#include<iostream>
#include<cmath>
using namespace std;
int T;
int main(void) {
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false); ios_base::sync_with_stdio(false);
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		long long n;
		cin >> n;
		int count = 0;
		for (int i = 1; i <= n / 2 + 1; i++)
		{
			long long temp = ((long long)i * (long long)(i + 1)) / 2;
			if (temp - n >= 0)
			{
				long long myT = (long long)sqrt((temp - n) * 2);
				if (1ll * myT * (myT + 1) == 1ll * (temp - n) * 2)
				{
					count++;
				}
			}
		}
		if (n == 1 || n == 2)
		{
			cout << "#" << test << " " << 1 << endl;
			continue;
		}
		cout << "#" << test << " " << count + 1 << endl;
	}
}
