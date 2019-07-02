#include <iostream>
#include<string>
#include<cstring>
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
		int N = 0, M = 0;
		int x, y, c;
		cin >> N;
		int** map = new int*[N];
		for (int i = 0; i < N; ++i)
			map[i] = new int[N];
		memset(map, 0, sizeof(map));
		for (int i = 0; i < M; ++i)
		{
			cin >> x >> y >> c;
			map[y][x] = c;
			if
		}
		cout << "#" << testcase << " ";
	}
	return 0;
}
