#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N;
	cin >> T;
	for (int t = 1; t <= T; ++t)
	{
		cin >> N;
		int sum = 0;
		int result = 0;
		int* tempArr = new int[N];
		for (int i = 0; i < N; ++i)
		{
			cin >> tempArr[i];
			sum += tempArr[i];
		}
		sum /= N;
		for (int i = 0; i < N; ++i)
		{
			if (tempArr[i] <= sum)
				++result;
		}
		cout << "#" << t << " " << result << "\n";

	}
}
