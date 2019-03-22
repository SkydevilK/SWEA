#include<iostream>
#include<vector>
int T;
int N;
int M;
int m;
bool ischeck;
int totalMoney;
std::vector<std::string> lotto;
std::vector<int> lottoprice;
int main()
{
	char* number=new char();
	scanf("%d", &T);
	for (int test_case = 1; test_case <= T; ++test_case)
	{
		totalMoney = 0;
		lotto.clear();
		lottoprice.clear();
		scanf("%d %d", &N, &M);
		for (int i = 0; i < N; ++i)					//correct lotto
		{
			scanf("%s", number);
			scanf("%d", &m);
			lotto.push_back(std::string(number));
			lottoprice.push_back(m);

		}
		for (int i = 0; i < M; ++i)					//buy lotto
		{
			std::cin >> number;
			int len = lotto.size();
			for (int idx = 0; idx < len; ++idx)
			{
				ischeck = true;
				for (int j = 0; j < 8; ++j)				//check lotto
				{
					if (!((number[j] == lotto[idx][j]) || lotto[idx][j] == '*'))
					{
						ischeck = false;
						break;
					}
				}
				if (ischeck == true)
				{
					totalMoney += lottoprice[idx];
					break;
				}
			}
		}

		printf("#%d %d\n", test_case, totalMoney);
	}
	return 0;
}
