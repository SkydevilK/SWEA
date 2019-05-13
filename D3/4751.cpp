#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
int T;
char first[] = "#...";
char second[] = ".#";
string str;
int main()
{
	cin.tie(NULL); cout.tie(NULL); std::ios::sync_with_stdio(false);
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		str.erase();
		cin >> str;
		int len = str.length();
		if (len > 1)
		{
			cout << "..";
			for (int i = 1; i < len; ++i)
			{
				cout << first;
			}
			cout << "#.." << "\n";
			for (int i = 0; i < len * 2; ++i)
			{
				cout << second;
			}
			cout << "." << "\n";
			cout << "#.";
			for (int i = 0; i < len-1; ++i)
			{
				cout << str[i] << ".#.";
			}	
            cout << str[len-1] << ".#";
			cout << "\n";
			for (int i = 0; i < len * 2; ++i)
			{
				cout << second;
			}
			cout << "." << "\n";
			cout << "..";
			for (int i = 1; i < len; ++i)
			{
				cout << first;
			}
			cout << "#.." << "\n";
		}
		else
		{
			cout << "..#..\n";
			cout << ".#.#.\n";
			cout << "#." << str[0] << ".#\n";
			cout << ".#.#.\n";
			cout << "..#..\n";
		}
	}
	return 0;
}
