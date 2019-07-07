#include <iostream>
using namespace std;
int main()
{
	cout.tie(NULL);	cin.tie(NULL);	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		unsigned long long L, U, X;
		cin >> L >> U >> X;
		if (X < L)
		{
			cout << "#" << testcase << " " << L - X << "\n";
		}
		else if (X > U)
		{
			cout << "#" << testcase << " -1\n";
		}
		else
		{
			cout << "#" << testcase << " 0\n";
		}
	}
	return 0;
}
