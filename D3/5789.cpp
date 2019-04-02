#include<iostream>
#include<cstring>
using namespace std;
int T, N, Q, L, R;
int  arr[10001];
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		cin >> N >> Q;
		memset(arr, 0, sizeof(arr));
		for (int i = 1; i <= Q; ++i)
		{
			cin >> L >> R;
			for (int j = L - 1; j < R; ++j)
			{
				arr[j] = i;
			}
		}

		cout << "#" << test << " ";
		for (int i = 0; i < N; ++i)
			cout << arr[i] << " ";
		cout << "\n";
	}
}
