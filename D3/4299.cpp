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
		int D, H, M;
		int sum = 0;
		cin >> D >> H >> M;
		if ((D < 11) || (D == 11 && H < 11) || (D == 11 && H == 11 && M < 11))
		{
			cout << "#" << testcase << " " << "-1" << "\n";
		}
		else if (D == 11 && H == 11 && M == 11)
		{
			cout << "#" << testcase << " " << "0" << "\n";
		}
		else
		{
			D -= 11;
			H -= 11;
			M -= 11;
			if (M < 0)
			{
				M += 60;
				H -= 1;
			}
			if (H < 0)
			{
				H += 24;
				D -= 1;
			}
			sum = D * 1440 + H * 60 + M;
			cout << "#" << testcase << " " << sum << "\n";
		}
	}
	return 0;
}
