#include<iostream>
using namespace std;
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	int T;
	cin >> T;
	int* values;
    int* counts;
	int i, j, value, count, maxCount;
	for (int Testcase = 1; Testcase <= T; Testcase++) {
		int N;
		cin >> N;
		values = new int[N];
		counts = new int[N];
		maxCount = 0;
		for (i = 0; i < N; i++)
		{
			cin >> values[i];
		}
		for (i = 0; i < N; i++) {
			value = values[i];
			count = counts[i];
			for (j = i + 1; j < N; j++) {
				if (value > values[j]) continue;
				if (count + 1 <= counts[j]) continue;
				counts[j] = count + 1;
				if (count + 1 > maxCount) maxCount = count + 1;
			}
		}
		cout << "#" << Testcase << " " << (maxCount + 1) << "\n";
	}
}
