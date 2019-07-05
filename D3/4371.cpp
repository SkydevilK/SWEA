#include <iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
bool isCheck[5001];
int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T;
	int N;
	cin >> T;
	int temp;
	for (int testcase = 1; testcase <= T; ++testcase)
	{
		cin >> N;
		vector<int>  vec;
		int count = 0;
		int distance = 0;
		memset(isCheck, 0, sizeof(bool) * 5001);
		for (int i = 0; i < N; ++i)
		{
			cin >> temp;
			vec.push_back(temp);
		}
		int len = vec.size();		
		distance = vec[1] - vec[0];
		int now = vec[1];
		count = 1;
		isCheck[0] = true;
		isCheck[1] = true;
		bool isloop = true;
		while (isloop)
		{
			for (int i = 1; i + 1 < len; ++i)
			{
				if (vec[i + 1] - now == distance)
				{
					isCheck[i + 1] = true;
					now = vec[i + 1];
				}
			}
			isloop = false;
			for (int i = 1; i< len; ++i)
			{
				if (isCheck[i] == false)
				{
					isCheck[i] = true;
					distance = vec[i] - vec[0];
					now = vec[i];
					isloop = true;
					count++;
					break;
				}
			}
		}
		cout << "#" << testcase << " " << count << "\n";
	}
	return 0;
}
