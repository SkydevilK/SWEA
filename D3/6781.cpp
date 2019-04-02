#include<iostream>
using std::cin;
using std::cout;
int main()
{
	std::ios::sync_with_stdio(false);	cin.tie(NULL);	cout.tie(NULL);
	int T;
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		int A[3][13] = { 0 };
		int check = 0;
		char Card[10];
		char Color[10];
		cin >> Card >> Color;
		for (int i = 0; i < 9; ++i)
		{
			switch (Color[i])
			{
			case 'R':
				++A[0][Card[i] - '0'];
				break;
			case 'G':
				++A[1][Card[i] - '0'];
				break;
			case 'B':
				++A[2][Card[i] - '0'];
				break;
			}
		}
		for (int j = 0; j < 3; ++j)
			for (int i = 1; i <= 9; ++i)
			{
				while (A[j][i] > 0 && A[j][i + 1] > 0 && A[j][i + 2] > 0)
				{
					++check;
					--A[j][i];
					--A[j][i + 1];
					--A[j][i + 2];
				}
				if (A[j][i] >= 3)
				{
					++check;
					A[j][i] -= 3;
				}
			}
		if (check == 3)
			cout << "#" << test << " " << "Win\n";
		else
			cout << "#" << test << " " << "Continue\n";

	}
}
