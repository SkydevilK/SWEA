#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
int T;
char str[1002];
int count = 0;
int total = 0;
int main()
{
	cin.tie(NULL); cout.tie(NULL); std::ios::sync_with_stdio(false);
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
        total = 0;
        count =0;
		cin >> str;
		int len = strlen(str);
		for (int i = 0; i < len; ++i)
		{
			if (total<i)
			{
				++total;
				++count;
			}
			total += str[i] - '0';
			
		}
		cout << "#" << test << " " << count << "\n";
	}
	return 0;
}
