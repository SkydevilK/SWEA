#include<cstdio>
int main()
{
    int test_case;
    int T;
    int N;
    int M;
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; ++test_case)
    {
        int arr[41] = { 0 };
 
        scanf("%d %d", &N, &M);
        for (int i = 1; i <= N; ++i)
            for (int j = 1; j <= M; ++j)
                ++arr[i + j];
        int max = 0;
        for (int i = 0; i < 41; ++i) {
            if (max < arr[i])
                max = arr[i];
        }
        printf("#%d ", test_case);
        for (int i = 0; i < 41; ++i)
        {
            if (arr[i] == max)
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
