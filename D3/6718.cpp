#include<iostream>
using std::cin;
using std::cout;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	int d;
	int num = 0;
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		cin >> d;
		if (d < 100)
			num = 0;
		else if (d < 1000)
			num = 1;
		else if (d < 10000)
			num = 2;
		else if (d < 100000)
			num = 3;
		else if (d < 1000000)
			num = 4;
		else
			num = 5;
		cout << "#" << test << " "<< num << "\n";
	}
}
