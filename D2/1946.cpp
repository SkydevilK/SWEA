#include<cstdio>
#include<vector>
int T;                                // Test Case
int N;
char tempC;
char tempI;
int count;
std::vector<std::pair<char, int>> v; 
int main()
{
	scanf(" %d", &T);
	for (int t = 1; t <= T; ++t)
	{
		count = 0;
		scanf(" %d", &N);
		for (int i = 0; i < N; ++i)
		{
			scanf(" %c %d", &tempC, &tempI);
			v.push_back(std::pair<char, int>(tempC, tempI));
		}
		printf("#%d\n", t);
		while (!v.empty())
		{
			if (v[0].second != 0)
			{
				printf("%c", v[0].first);
				--v[0].second;
				++count;
			}
			else
			{
				v.erase(v.begin());
			}
			if (count == 10)
			{
				count = 0;
				printf("\n");
			}
		}
		printf("\n");
	}
}
