#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout.tie(NULL);	cin.tie(NULL);	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		int count[1001];
		int N;
		memset(count, 0, sizeof(count));
		cin >> N;
		int* input = new int[N + 1];
		for (int i = 0; i < N; ++i)
		{
			cin >> input[i];
		}
		for (int i = 0; i < N; ++i)
		{
			if (i + 2 < N)
			{
				count[input[i] * 100 + input[i + 1] * 10 + input[i + 2]] = 1;
			}
			if (i + 1 < N)
			{
				count[input[i] * 10 + input[i + 1]] = 1;
			}
			count[input[i]] = 1;
		}
		for (int i = 0; i < 1001; ++i)
		{
			if (count[i] == 0)
			{
				cout << "#" << testcase << " " << i << "\n";
				break;
			}
		}
	}
	return 0;
}
