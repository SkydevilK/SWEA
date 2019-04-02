#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int prime[1000];
int primeNum;
int T;
int N[7];
int result;
vector<int> vec;
int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		vec.clear();
		for (int i = 0; i < 7; ++i)
			cin >> N[i];
		for (int i = 0; i < 7; ++i)
			for (int j = i + 1; j < 7; ++j)
				for (int k = j + 1; k < 7; ++k)
				{
					vec.push_back(N[i] + N[j] + N[k]);
				}
			sort(vec.begin(), vec.end());
			vec.erase(unique(vec.begin(), vec.end()), vec.end());
		cout << "#" << test << " " << vec[vec.size() - 5] << "\n";
	}
}
