#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
int siz = 0;
int main()
{
    int T, N, K, cnt, temp, start, end, distance, tempCnt, higher;
    int v[10001];
    scanf("%d", &T);
    for (int t = 1; t <= T; ++t)
    {
        scanf("%d %d", &N, &K);
        siz = 0;
        cnt = start = end = distance = 0;
        for (int i = 0; i < N; ++i)
        {
            scanf("%d", &temp);
            v[siz++] = temp;
        }
        std::sort(v, v+ siz,std::greater<int>());
        tempCnt = 0;
        while (true) {
            if (distance > K) {
                distance = v[++start] - v[end];
                --tempCnt;
            }
            else if (end == siz) {
                break;
            }
            else {
                distance = v[start] - v[++end];
                ++tempCnt;
                if (cnt < tempCnt)
                    cnt = tempCnt;
            }
        }
        printf("#%d %d\n", t, cnt);
    }
}
