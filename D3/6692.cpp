#include<iostream>
using std::cin;
using std::cout;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T = 0;
	int N = 0;
	double p = 0;
	int money = 0;
	double total = 0;
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
        total=0;
		cin >> N;
		for (int i = 0; i < N; ++i)
		{
			cin >> p >> money;
			total += p * money;
		}
		cout << std::fixed;
		cout.precision(6);
		cout << "#" << test << " " << total << "\n";
	}
}
