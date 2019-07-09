#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int Testcase = 1; Testcase <= T; Testcase++) {
		long long A;
		long long B;
		cin >> A >> B;
		long long C = A / B;
		cout << "#" << Testcase << " " << C * C << "\n";
	}
}
