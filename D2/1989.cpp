#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	bool check = false;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		char* arr = new char();
		scanf("%s", arr);
		int length = strlen(arr);
		for (int idx = 0; idx < length / 2; idx++)
		{
			if (arr[idx] == arr[length - idx - 1])
				check = false;
			else
			{
				check = true;
				break;
			}
		}
		if (check)
			printf("#%d 0\n", i);
		else
			printf("#%d 1\n", i);
		delete[] arr;
	}
}