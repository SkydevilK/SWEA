#include<iostream>
using namespace std;
int main()
{

	int T = 0;
	int year, month, day, tempNum;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &tempNum);
		day = tempNum % 100;
		if (day == 0)
		{
			printf("#%d -1\n", i + 1);
			continue;
		}
		tempNum /= 100;
		month = tempNum % 100;
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day > 31)
			{
				printf("#%d -1\n", i + 1);
				continue;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day > 30)
			{
				printf("#%d -1\n", i + 1);
				continue;
			}
			break;
		case 2:
			if (day > 28)
			{
				printf("#%d -1\n", i + 1);
				continue;
			}
			break;
		default:
			printf("#%d -1\n", i + 1);
			continue;
		}
		tempNum /= 100;
		year = tempNum;
		printf("#%d %04d/%02d/%02d\n", i + 1, year, month, day);

	}
}