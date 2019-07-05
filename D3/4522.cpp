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
		while (true)
		{
			if (len % 2 == 0)
			{
				if (count + mid - 1 >= len)
					break;
				if (!(Q[mid-count]=='?'||Q[mid+count-1]=='?')&&Q[mid - count] != Q[mid + count - 1])
				{
					ispalindrome = false;
					break;
				}
			}
			else
			{
				if (count + mid >= len)
					break;
				if (!(Q[mid - count] == '?' || Q[mid + count - 1] == '?') && Q[mid - count] != Q[mid + count])
				{
					ispalindrome = false;
					break;
				}
			}
			++count;
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
