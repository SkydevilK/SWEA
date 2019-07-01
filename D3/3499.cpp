#include <iostream>
#include<string>
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
		int N = 0;
		cin >> N;
		string Word;
		string* FWords = new string[N / 2 + 1];
		string* LWords = new string[N / 2 + 1];
		int Fidx = 0;
		int Lidx = 0;
		for (int i = 0; i < N; ++i)
		{
			cin >> Word;
			if ((N + 1) / 2 > i)
			{
				FWords[Fidx++] = Word;
			}
			else
			{
				LWords[Lidx++] = Word;
			}
		}
		Fidx = 0;
		Lidx = 0;
		cout << "#" << testcase << " ";
		for (int i = 0; i < N; ++i)
		{
			if (i % 2 == 0)
			{
				if (i + 1 != N)
					cout << FWords[Fidx++] << " ";
				else
					cout << FWords[Fidx++] << "\n";
			}
			else
			{
				if (i + 1 != N)
					cout << LWords[Lidx++] << " ";
				else
					cout << LWords[Lidx++] << "\n";
			}
		}
	}
	return 0;
}
