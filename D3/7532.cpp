#include<iostream>

using namespace std;
int T;
int main(void) {
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false); ios_base::sync_with_stdio(false);
	cin >> T;
	int S, E, M;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		cin >> S >> E >> M;
		int TS = E, TM = E;
		int result = E;
		int div = 24;
		while (true) {
			if (TS == S && TM == M) {
				break;
			}
			TS += div;
			if (TS > 365)
				TS %= 365;
			TM += div;
			if (TM > 29)
				TM %= 29;
			result += div;

		}
		cout << "#" << testcase << " " << result << "\n";
	}
}
