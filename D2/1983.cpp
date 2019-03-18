#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
bool desc(const pair<float, int>&a, const pair<float, int>&b)
{
	return a.first > b.first;
}
int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		vector<pair<float, int>> v;
		int num, target, rank = 1;
		scanf("%d %d", &num, &target);
		for (int j = 0; j < num; j++)
		{
			float a, b, c = 0;
			scanf("%f %f %f", &a, &b, &c);
			v.push_back(pair<float, int>((a*0.35f + b * 0.45f + c * 0.2f), j + 1));
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		vector<pair<float, int>>::iterator iter;
		for (iter = v.begin(); iter != v.end(); iter++)
		{
			if (iter->second == target)
			{
				if (rank <= 1 * num / 10)
				{
					printf("#%d A+\n", i);

				}
				else if (rank <= 2 * num / 10)
				{
					printf("#%d A0\n", i);
				}
				else if (rank <= 3 * num / 10)
				{
					printf("#%d A-\n", i);
				}
				else if (rank <= 4 * num / 10)
				{
					printf("#%d B+\n", i);
				}
				else if (rank <= 5 * num / 10)
				{
					printf("#%d B0\n", i);
				}
				else if (rank <= 6 * num / 10)
				{
					printf("#%d B-\n", i);
				}
				else if (rank <= 7 * num / 10)
				{
					printf("#%d C+\n", i);
				}
				else if (rank <= 8 * num / 10)
				{
					printf("#%d C0\n", i);
				}
				else if (rank <= 9 * num / 10)
				{
					printf("#%d C-\n", i);
				}
				else if (rank <= 10 * num / 10)
				{
					printf("#%d D0\n", i);
				}
				break;
			}
			rank++;
		}
	}
}