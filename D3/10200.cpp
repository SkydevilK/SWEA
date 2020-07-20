#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N, A, B, max, min;
	cin >> T;
	for (int t = 1; t <= T; ++t)
	{
		cin >> N >> A >> B;
		max = A < B ? A : B;
		if (A + B > N)
			min = A + B - N;
		else
			min = 0;
		cout << "#" << t << " " << max << " " << min << "\n";
	}
}
