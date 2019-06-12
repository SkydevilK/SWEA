#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int test_case;
	int T;
	cin >> T;
	int numArr[10];
	for (test_case = 1; test_case <= T; ++test_case)
	{
		memset(numArr, 0, sizeof(numArr));
		int X = 0;
		cin >> X;
		do 
		{
			++numArr[X % 10];
			X /= 10;
		} while (X != 0);
		int count = 0;
		for (int i = 0; i < 10; ++i)
		{
			if (numArr[i] != 0)
				++count;
		}
		cout << "#" << test_case << " " << count << "\n";
	}
	return 0;
}
