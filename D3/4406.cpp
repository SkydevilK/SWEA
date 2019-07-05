#include <iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	string temp;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		vector<char> vec;
		cin >> temp;
		int len = temp.length();
		for (int i = 0; i < len; ++i)
		{
			if (temp[i] != 'a'&&temp[i] != 'e'&&temp[i] != 'i'&&temp[i] != 'o'&&temp[i] != 'u')
				vec.push_back(temp[i]);
		}
		cout << "#" << testcase << " ";
		len = vec.size();
		for (int i = 0; i < len; ++i)
		{
			cout << vec[i];
		}
		cout << "\n";
	}
	return 0;
}
