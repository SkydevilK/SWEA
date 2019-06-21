#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;
	for (int t = 1; t <= testcase; ++t)
	{
		vector<char> c;
		int arr[21] = { 0 };
		string s;
		cin >> s;
		int len = s.length();
		int h = 0;
		int temp;
		for (int i = 0; i < len; ++i)
		{
			c.push_back(s[i]);
		}
		cin >> h;
		for (int i = 0; i < h; ++i)
		{
			cin >> temp;
			++arr[temp];
		}
		if (arr[0] != 0)
		{
			c.insert(c.begin(), arr[0], '-');
		}

		for (int i = 1; i <= len; ++i)
		{
			if (arr[i] != 0)
			{
				int count = 0;
				vector<char>::iterator it;
				for (it = c.begin(); it != c.end(); ++it)
				{
					if (*it >= char('a') && *it <= char('z'))
						++count;
					if (count == i)
					{
						c.insert(it + 1, arr[i], '-');
						break;
					}
				}
			}
		}
		cout << "#" << t << " ";
		for (int i = 0; i < c.size(); ++i)
		{
			cout << c[i];
		}
		cout << "\n";
	}
	return 0;
}