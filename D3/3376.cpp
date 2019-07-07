#include <iostream>
using namespace std;
int main(void) {
	cout.tie(NULL);	cin.tie(NULL);	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	long long arr[101] = { 1,1,1,2,2,3,4,5,7,9, };
	for (int i = 10; i < 101; i++)
		arr[i] = arr[i - 1] + arr[i - 5];
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		int N;
		cin >> N;
		cout << "#" << testcase << " " << arr[N-1] << "\n";
	}
	return 0;
}
