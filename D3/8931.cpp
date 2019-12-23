#include <iostream>
constexpr auto endl = "\n";
using std::cin;
using std::cout;
int arr[100001];
auto idx = 0, K = 0, temp = 0, sum = 0;
int main() {
	std::ios::sync_with_stdio(false); std::ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);
	register	int T;
	cin >> T;
	for (register int t = 1; t <= T; ++t)
	{
		idx = sum = 0;
		cin >> K;
		for (register int i = 0; i < K; ++i) {
			cin >> temp;
			if (temp == 0)
			{
				sum -= arr[--idx];
			}
			else
			{
				arr[idx++] = temp;
				sum += temp;
			}
		}
		cout << "#" << t << " " << sum << endl;
	}
}
