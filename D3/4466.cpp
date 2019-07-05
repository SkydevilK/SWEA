#include <iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T;
	int N;
	int K;
	int temp = 0;
	int sum = 0;
	vector<int> vec;
	cin >> T;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		vec.clear();
		sum = 0;
		cin >> N >> K;
		for (int i = 0; i < N; ++i)
		{
			cin >> temp;
			if (vec.size() < K)
			{
				vec.push_back(temp);
			}
			else
			{
				vec.push_back(temp);
				sort(vec.begin(), vec.end());
				vec.erase(vec.begin());
			}
		}
		int vecLenth = vec.size();
		for (int i = 0; i < vecLenth; ++i)
			sum += vec[i];
		cout << "#" << testcase << " " << sum << "\n";
	}
	return 0;
}
