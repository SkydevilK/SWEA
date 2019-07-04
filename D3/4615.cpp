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
	int dir_x[8] = { 0,0,-1,1,1,-1,1 ,-1 };
	int dir_y[8] = { 1,-1,0,0,1,1,-1,-1 };
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		int N = 0, M = 0;
		int x, y, c;
		int BCount = 0;
		int WCount = 0;
		cin >> N >> M;
		int** map = new int* [N];
		for (int i = 0; i < N; ++i)
		{
			map[i] = new int[N];
			memset(map[i], 0, sizeof(int) * N);
		}
		for (int i = 0; i < M; ++i)
		{
			cin >> x >> y >> c;
			--x;
			--y;
			map[y][x] = c;
			if (c == 1)
			{
				for (int loop = 0; loop < 8; ++loop)
				{
					int tempx = x + dir_x[loop];
					int tempy = y + dir_y[loop];
					if (tempx >= 0 && tempy >= 0 && tempx < N && tempy < N && map[tempy][tempx] == 2)
					{
						while (tempx >= 0 && tempy >= 0 && tempx < N && tempy < N)
						{
							if (map[tempy][tempx] == 1)
							{
								for (int _tempy = y; _tempy <= tempy; ++_tempy)
									for (int _tempx = x; _tempx <= tempx; ++_tempx)
									{
										map[_tempy][_tempx] = 1;
									}
								break;
							}
							else if (map[tempy][tempx] == 0)
								break;

							tempx = tempx + dir_x[loop];
							tempy = tempy + dir_y[loop];
						}
					}
				}
			}
			else
			{
				for (int loop = 0; loop < 8; ++loop)
				{
					int tempx = x + dir_x[loop];
					int tempy = y + dir_y[loop];
					if (tempx >= 0 && tempy >= 0 && tempx < N && tempy < N && map[tempy][tempx] == 1)
					{
						while (tempx >= 0 && tempy >= 0 && tempx < N && tempy < N)
						{
							if (map[tempy][tempx] == 2)
							{
								for (int _tempy = y; _tempy <= tempy; ++_tempy)
									for (int _tempx = x; _tempx <= tempx; ++_tempx)
									{
										map[_tempy][_tempx] = 2;
									}
								break;
							}
							else if(map[tempy][tempx] == 0)
								break;
							tempx = tempx + dir_x[loop];
							tempy = tempy + dir_y[loop];
						}
					}
				}
			}
			for (int j = 0; j < N; ++j)
			{
				for (int i = 0; i < N; ++i)
				{
					cout << map[j][i] << " ";
				}
				cout << "\n";
			}
		}
		for (int j = 0; j < N; ++j)
			for (int i = 0; i < N; ++i)
			{
				if (map[j][i] == 1)
					++BCount;
				else if (map[j][i] == 2)
					++WCount;
			}
		cout << "#" << testcase << " " << BCount << " " << WCount << "\n";
	}
	return 0;
}
