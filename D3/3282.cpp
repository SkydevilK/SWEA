#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int Testcase = 1; Testcase <= T; Testcase++) {
		int v[102] = { 0 };
		int c[102] = { 0 };
		int a[102][1002] = { {0} };
		int N, K;
		cin >> N >> K;
		for (int i = 0; i < N; ++i)
		{
			cin >> v[i] >> c[i];
		}
		for (int i = 0; i <= N; i++) {
			for (int w = 0; w <= K; w++) {
				if (i == 0 || w == 0) {
					a[i][w] = 0;
					continue;
				}
				if (v[i - 1] <= w) {
					a[i][w] = max(c[i - 1] + a[i - 1][w - v[i - 1]], a[i - 1][w]);
					continue;
				}
				a[i][w] = a[i - 1][w];
			}
		}
		cout << "#" << Testcase << " " << a[N][K] << "\n";
	}
}
