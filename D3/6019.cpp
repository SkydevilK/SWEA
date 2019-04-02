#include<iostream>
using namespace std;
int T
double D, A, B, F;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		cin >> D >> A >> B >> F;
		double time = D / (A + B);
		cout<<fixed;
		cout.precision(6);
		cout << "#" << test << " " << F * time << "\n";
	}
}
