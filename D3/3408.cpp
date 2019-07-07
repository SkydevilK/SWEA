#include <iostream>
using namespace std;
int main()
{
	cout.tie(NULL);	cin.tie(NULL);	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		unsigned long N;
		cin >> N;
        long S1 = (N+1)*N/2;
        long S3 = S1 * 2;
        long S2 = S3 - N;
        cout << "#" << testcase << " " << S1 << " " << S2 << " " << S3 << "\n";
	}
	return 0;
}
