#include <iostream>
using namespace std;
int main()
{
	cout.tie(NULL);	cin.tie(NULL);	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		int A, B, C, D;
		cin >> A >> B >> C >> D;
		float AliceWinRate = (float)A / B;
		float BobWinRate = (float)C / D;
		if (AliceWinRate > BobWinRate)
		{
			cout << "#" << testcase << " ALICE" << "\n";
		}
		else if (AliceWinRate < BobWinRate)
		{
			cout << "#" << testcase << " BOB" << "\n";
		}
		else
		{
			cout << "#" << testcase << " DRAW" << "\n";
		}
	}
	return 0;
}
