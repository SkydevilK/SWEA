#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int testcase = 1; testcase <= T; testcase++)
	{
		string A, B, C;
		cin >> A >> B;
		int A_Size = A.size(), B_Size = B.size(), len = max(A_Size, B_Size);
		if (A_Size > B_Size) for (int i = 0; i < A_Size - B_Size; i++) B = "0" + B;
		else for (int i = 0; i < B_Size - A_Size; i++) A = "0" + A;
		int plus = 0, sum;
		for (int i = len - 1; i >= 0; i--)
		{
			sum = A[i] - '0' + B[i] - '0' + plus;
			if (sum >= 10) plus = 1, C.push_back(sum - 10 + '0');
			else plus = 0, C.push_back(sum + '0');
		}
		if (plus) C.push_back('1');
		reverse(C.begin(), C.end());
		cout << '#' << testcase << ' ' << C << '\n';
	}
	return 0;
}
