#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	std::cout.tie(NULL);
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		char* curTime= new char();
		cin >> curTime;
		char* alarm = new char();
		cin >> alarm;
		int curt[3] = { 0 };
		int at[3] = { 0 };
		int t[3] = { 0 };
		int i = 0;
		char* temp = strtok(curTime, ":");
		while (temp !=NULL)
		{
			curt[i++] = atoi(temp);
			temp = strtok(NULL, ":");
		}
		i = 0;
		temp = strtok(alarm, ":");
		while (temp != NULL)
		{
			at[i++] = atoi(temp);
			temp = strtok(NULL, ":");
		}
		for (i = 0; i < 3; ++i)
			t[i] = at[i] - curt[i];
		if (t[0] < 0)
		{
			t[0] = 24 - curt[0] + at[0];
		}
		if (t[1] < 0)
		{
			t[0] -= 1;
			t[1] = 60 - curt[1] + at[1];
		}
		if (t[2] < 0)
		{
			t[1] -= 1;
			t[2] = 60 - curt[2] + at[2];
		}
		if (t[0] < 0)
		{
			t[0] += 24;
		}
		std::cout << "#" << test_case << " ";
		if (t[0] < 10)
		{
			std::cout << "0" << t[0] << ":";
		}
		else
		{
			std::cout << t[0] << ":";
		}
		if (t[1] < 10)
		{
			std::cout << "0" << t[1] << ":";
		}
		else
		{
			std::cout << t[1] << ":";
		}
		if (t[2] < 10)
		{
			std::cout << "0" << t[2] << "\n";
		}
		else
		{
			std::cout << t[2] << "\n";
		}
	}
	return 0;
}
