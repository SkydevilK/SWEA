#include<iostream>
#include<cstring>
using namespace std;
bool arr[51][51];
int N;
int M;
int X;
int Y;
int T;
int _count = 0;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		_count = 0;
		memset(arr, 0, sizeof(arr));
		cin >> N >> M;
		for (int i = 0; i < M; ++i)
		{
			cin >> X >> Y;
			arr[X][Y] = true;
			arr[Y][X] = true;
		}
		for (int i = 1; i <= N; ++i)
		{
			for (int j = i + 1; j <= N; ++j)
			{
				if (arr[i][j] == true)
				{
					for (int a = j + 1; a <= N; ++a)
					{
						if (arr[j][a] == true)
						{
							if (arr[a][i])
								++_count;
						}
					}
				}
			}
		}
		cout << "#" << test << " " << _count << "\n";
	}
}
