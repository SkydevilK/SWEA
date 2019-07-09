#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int a[1001][1001];
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int Testcase = 1; Testcase <= T; Testcase++) {
		string X;
		cin >> X;
		string Y;
		cin >> Y;
		int m = X.length();
		int n = Y.length();
		memset(a, 0, sizeof(a));
		for (int i = 0; i <= m; i++) {
			for (int j = 0; j <= n; j++) {
				if (i == 0 || j == 0) {
					a[i][j] = 0;
					continue;
				}
				if (X[i - 1] == Y[j - 1]) {
					a[i][j] = a[i - 1][j - 1] + 1;
					continue;
				}
				a[i][j] = max(a[i - 1][j], a[i][j - 1]);
			}
		}
		cout << "#" << Testcase << " " << a[m][n] << "\n";
	}
}
