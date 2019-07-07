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
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		int card[5][14];
		memset(card, 0, sizeof(card));
		bool isError = false;
		int cardNum = 0;
		string Question;
		cin >> Question;
		int len = Question.size();
		int _s = 13, _d = 13, _h = 13, _c = 13;
		for (int i = 0; i < len; i += 3)
		{
			cardNum = (Question[i + 1] - '0') * 10 + Question[i + 2] - '0';
			if (Question[i] == 'S')
			{
				if (card[1][cardNum] == false)
				{
					card[1][cardNum] = true;
					--_s;
				}
				else
				{
					isError = true;
					break;
				}
			}
			else if (Question[i] == 'D')
			{
				if (card[2][cardNum] == false)
				{
					card[2][cardNum] = true;
					--_d;
				}
				else
				{
					isError = true;
					break;
				}
			}
			else if (Question[i] == 'H')
			{
				if (card[3][cardNum] == false)
				{
					card[3][cardNum] = true;
					--_h;
				}
				else
				{
					isError = true;
					break;
				}
			}
			else if (Question[i] == 'C')
			{
				if (card[4][cardNum] == false)
				{
					card[4][cardNum] = true;
					--_c;
				}
				else
				{
					isError = true;
					break;
				}
			}
		}
		if (isError == true)
		{
			cout << "#" << testcase << " ERROR" << "\n";
		}
		else
		{
			cout << "#" << testcase << " " << _s << " " << _d << " " << _h << " " << _c << "\n";
		}
	}
	return 0;
}
