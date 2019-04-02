#include<iostream>
using std::cin;
using std::cout;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	int N;
	int prev;
	int cur;
	int up;
	int down;
	int dis;
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		up = 0;
		down = 0;
		cin >> N;
		cin >> prev;
		for (int i = 1; i < N; ++i)
		{
			cin >> cur;			
			if (prev < cur)
			{
				dis = cur - prev;
				if (up < dis)
				{
					up = dis;
				}
			}
			else if(prev>cur)
			{
				dis = prev - cur;
				if (down < dis)
				{
					down = dis;
				}
			}
			prev = cur;
		}
		cout << "#" << test << " " << up << " " << down << "\n";
	}
}
