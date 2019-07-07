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
		int a, b, c;
		cin >> a >> b >> c;
		if (a == b)
		{
			cout << "#" << testcase << " " << c << "\n";
		}
		else if (b == c)
			cout << "#" << testcase << " " << a << "\n";
		else
			cout << "#" << testcase << " " << b << "\n";
	}
	return 0;
}
