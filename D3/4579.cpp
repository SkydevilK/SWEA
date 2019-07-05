#include <iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		bool ispalindrome = true;
		string Q;
		cin >> Q;
		int len = Q.length();
		int mid = len / 2;
		int count = 0;
		if (len == 1)
		{
			cout << "#" << testcase << " Exist" << "\n";
			continue;
		}
		for (int i = 0; i < len / 2; i++) {
			if (Q[i] == '*')
			{
				break;
			}
			if (Q[len - 1 - i] == '*') {			
				break;
			}
			if (Q[i] != Q[len - 1 - i]) ispalindrome = false;
		}
		if (ispalindrome)
		{
			cout << "#" << testcase << " Exist" << "\n";
		}
		else
		{
			cout << "#" << testcase << " Not exist" << "\n";
		}
	}
	return 0;
}
