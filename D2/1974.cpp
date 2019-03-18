#include <stdio.h>
int map[9][9];
bool checkX(int startY)		//check X Line
{
	int arr[9] = { 0 };
	for (int x = 0; x < 9; ++x)
	{
		if (arr[map[startY][x]-1] == 0)
			++arr[map[startY][x]-1];
		else
			return false;
	}
	return true;
}
bool checkY(int startX)		//check Y Line
{
	int arr[9] = { 0 };
	for (int y = 0; y < 9; ++y)
	{
		if (arr[map[y][startX]-1] == 0)
			++arr[map[y][startX]-1];
		else
			return false;
	}
	return true;
}
bool checkS(int startX, int startY)		//check Square
{
	int arr[9] = { 0 };
	for (int y = startY; y < startY + 3; ++y)
		for (int x = startX; x < startX + 3; ++x)
		{
			if (arr[map[y][x]-1] == 0)
				++arr[map[y][x]-1];
			else
				return false;
		}
	return true;
}
int main()
{
	int T;				//test case
	scanf("%d", &T);
	for (int loop = 1; loop <= T; ++loop)
	{
		bool result = true;
		for (int y = 0; y < 9; ++y)
			for (int x = 0; x < 9; ++x)
				scanf("%d", &map[y][x]);
		for (int y = 0; y < 9; ++y)
			for (int x = 0; x < 9; ++x)
			{
				if (x == 0)
				{
					if (!checkX(y))
					{
						result = false;
					}
				}
				if (y == 0)
				{
					if (!checkY(x))
						result = false;
				}
				if ((x % 3) == 0 && (y % 3) == 0)
				{
					if (!checkS(x, y))
						result = false;
				}
			}
		printf("#%d %d\n", loop, (int)result);
	}
}
