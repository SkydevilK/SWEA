#include<iostream>
using std::cin;
using std::cout;
int A[5000];
int B[5000];
int C;
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T = 0;
	int N = 0;
	int P = 0;
	int count = 0;
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		cout << "#" << test << " ";
		cin >> N;
		for (int i = 0; i < N; ++i)
			cin >> A[i] >> B[i];
		cin >> P;
		for (int i = 0; i < P; ++i)
		{
			count = 0;
			cin >> C;
			for (int j = 0; j < N; ++j)
			{
				if (A[j] <= C && C <= B[j])
					++count;
			}
			cout << count << " ";
		}
		cout << "\n";
	}
}
