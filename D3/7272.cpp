#include<cstdio>
#include<cstring>
int T;
char* check(char* a, char* b)
{
	char* ref = new char();
	int len = strlen(a);
	int len2 = strlen(b);
	if (len != len2)
	{
		strcpy(ref, "DIFF");
		return ref;
	}
	bool ischeck = true;
	for (int i = 0; i < len; ++i)
	{
		switch (a[i])
		{
		case 'C':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			switch (b[i])
			{
			case 'C':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				break;
			default:
				ischeck = false;
			}
			break;
		case 'A':
		case 'D':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
			switch (b[i])
			{
			case 'A':
			case 'D':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
				break;
			default:
				ischeck = false;
				break;
			}
			break;
		case 'B':
			if (b[i] != 'B')
			{
				ischeck = false;
			}
			break;
		}
		if (!ischeck)
			break;
	}
	if (ischeck)
	{
		strcpy(ref, "SAME");
	}
	else
	{
		strcpy(ref, "DIFF");
	}
	return ref;
}
int main()
{
	scanf("%d", &T);
	for (int test = 1; test <= T; ++test)
	{
		char* a = new char();
		char* b = new char();
		scanf("%s %s", a, b);
		printf("#%d %s\n",test, check(a, b));
		delete[] a;
		delete[] b;
	}
}
