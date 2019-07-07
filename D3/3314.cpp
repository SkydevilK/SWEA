#include <iostream>
using namespace std;
int main(void) {
	cout.tie(NULL);	cin.tie(NULL);	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		int N;
		int Sum = 0;
		for (int i = 0; i < 5; ++i)
		{
			cin >> N;
			if (N <= 40)
				Sum += 40;
			else
				Sum += N;
		}
		cout << "#" << testcase << " " << Sum / 5 << "\n";
	}
	return 0;
}
