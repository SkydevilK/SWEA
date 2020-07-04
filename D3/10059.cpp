#include<iostream>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string str;
		cin >> str;
		int a = (str[0] - '0') * 10 + (str[1] - '0');
		int b = (str[2] - '0') * 10 + (str[3] - '0');
		if (a > 12 && b > 12)
			cout << "#" << test_case << " NA\n";
		else if (a == 0 && b == 0)
			cout << "#" << test_case << " NA\n";
		else if (a == 0 && b <= 12)
			cout << "#" << test_case << " YYMM\n";
		else if (a > 12 && b <= 12)
			cout << "#" << test_case << " YYMM\n";
		else if (a <= 12 && b > 12)
			cout << "#" << test_case << " MMYY\n";
		else if (a <= 12 && b == 0)
			cout << "#" << test_case << " MMYY\n";
		else
			cout << "#" << test_case << " AMBIGUOUS\n";
	}
	return 0;
}
