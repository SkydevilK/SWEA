#include<iostream>
#include<vector>
int code[10][7] = { {0,0,0,1,1,0,1},    //0
					{0,0,1,1,0,0,1},    //1
					{0,0,1,0,0,1,1},    //2
					{0,1,1,1,1,0,1},    //3
					{0,1,0,0,0,1,1},    //4
					{0,1,1,0,0,0,1},    //5
					{0,1,0,1,1,1,1},    //6
					{0,1,1,1,0,1,1},    //7
					{0,1,1,0,1,1,1},    //8
					{0,0,0,1,0,1,1}     //9
};
std::vector<int> decode;
int main()
{
	int N, M, C;
	int temp = 0;
	int checkPoint = 0;
	bool isRecord = false;
	int len = 0;
	scanf("%d", &C);

	for (int c = 1; c <= C; ++c)
	{
		decode.clear();
		int map[100] = { 0 };
		isRecord = false;
		checkPoint = 0;
		temp = 0;
		len = 0;
		scanf("%d %d", &N, &M);
		for (int i = 0; i < N*M; ++i)
		{
			scanf("%1d", &temp);
			if (isRecord == true)
			{
				if (len < 56)
					map[6 + len++] = temp;
			}
			else if (temp == 1 && isRecord == false)
			{
				isRecord = true;
				map[5] = temp;
			}
		}

		for (int i = 99; i >= 0; --i)
		{
			if (map[i] == 1)
			{
				checkPoint = i;
				break;
			}
		}
		for (int loop = 0; loop < 7; ++loop)
		{
			for (int i = 0; i < 10; ++i)
			{
				int count = 0;
				for (int j = 0; j < 7; ++j)
				{
					if (code[i][6 - j] == map[checkPoint - j])
					{
						++count;
					}
					else
						break;
					if (count == 7)
					{
						decode.push_back(i);
						checkPoint -= 7;
					}
				}
			}
		}
		if (((decode[0] + decode[2] + decode[4] + decode[6]) + (decode[1] + decode[3] + decode[5] + decode[7]) * 3) % 10 == 0)
		{
			printf("#%d %d\n", c, decode[0] + decode[1] + decode[2] + decode[3] + decode[4] + decode[5] + decode[6] + decode[7]);
		}
		else
		{
			printf("#%d %d\n", c, 0);
		}
	}
}
