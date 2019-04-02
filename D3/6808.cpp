#include<iostream>
#include<cstring>
using namespace std;
int total = 18 * 19 / 2;
int deckA[9];
int deckB[9];
bool check[19];
int win, lose = 0;
void init()
{
	int index = 0;
  memset(check, 0, sizeof(check));
	for (int i = 0; i < 9; ++i)
	{
		cin >> deckA[i];
		check[deckA[i]] = true;
	}
	for (int i = 1; i <= 18; ++i)
	{
		if (check[i] == false)
			deckB[index++] = i;
	}
	memset(check, 0, sizeof(check));
	win = lose = 0;
}
void dfs(int count, int Ascore, int Bscore)
{
	if (Ascore > total / 2 || Bscore > total / 2)
	{
		int result = 1;
		for (int i = count; i < 9; ++i)				// 전체의 절반이 넘을 경우 나머지 경우 확인
		{
			result *= 9 - i;
		}
		if (Ascore > total / 2)
		{
			win += result;
		}
		else
		{
			lose += result;
		}
		return;
	}
	else
	{
		for (int i = 0; i < 9; i++) {
			if (check[deckB[i]] == false) {
				check[deckB[i]] = true;

				if (deckA[count] > deckB[i])
					dfs(count + 1, Ascore + deckA[count] + deckB[i], Bscore);
				else
					dfs(count + 1, Ascore, Bscore + deckA[count] + deckB[i]);

				check[deckB[i]] = false;
			}
		}
	}
	}
	int main()
	{
		ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		int T;
		cin >> T;
		for (int test = 1; test <= T; ++test)
		{
			init();
			dfs(0, 0, 0);
			cout << "#" << test << " " << win << " " << lose << "\n";
		}
	}
