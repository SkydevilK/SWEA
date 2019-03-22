#include<string>
#include<iostream>
int N;
int T;
int result;
std::string str;
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case)
	{
		int arr[26]={0};
		result = 0;
		std::cin >> N;
		for (int i = 0; i < N; ++i)
		{
			std::cin >> str;
			++arr[str[0] - 'A'];
		}
		for (int i = 0; i < 26; ++i)
		{
			if (arr[i] == 0)
				break;
			++result;
		}
		std::cout << "#" << test_case << " " << result << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
