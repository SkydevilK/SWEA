#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

	int N = 0;
	int total = 0;
	scanf("%d", &N);
	while (true)
	{
		total += N % 10;
		N /= 10;
		if (N / 10 == 0)
		{
			total += N % 10;
			N /= 10;
			break;
		}
	}

	printf("%d", total);

}