#include<stdio.h>

int T;
int N;
int command;
int speed;
int distance;
int main()
{
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t)
	{
		speed = 0;
		distance = 0;
		scanf("%d", &N);
		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &command);
			switch (command)
			{
			case 0:
				distance += speed;
				break;
			case 1:
				scanf("%d", &command);
				distance += speed += command;
				break;
			case 2:
				scanf("%d", &command);
				speed -= command;
				distance += speed > 0 ? speed : speed = 0;
				break;
			}
		}
		printf("#%d %d\n", t, distance);
	}
}
