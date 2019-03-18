#include<iostream>
using namespace std;
int main()
{
	char * str = new char();
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97)
			printf("%c", str[i] - 97 + 65);
		else
			printf("%c", str[i]);
	}
}