#include<iostream>
using std::cin;
using std::cout;
int A, B, C;
int T;
int count;
int main()
{
	cin.tie(NULL); cout.tie(NULL); std::ios::sync_with_stdio(false);
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		count = 0;
		cin >> A >> B >> C;
		count = A < B ? C / A : C / B;
		cout << "#" << test << " " << count << "\n";
	}
	return 0;
}
