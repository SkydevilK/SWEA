#include<stdio.h>
int T;
int temp;
int num;
int main() 
{
    scanf("%d", &T);
    for (int t = 1; t <= T; ++t)
    {
        int arr[101]={0};
        scanf("%d", &t);
        for (int i = 0; i < 1000; ++i)
        {
            scanf("%d", &temp);
            ++arr[temp];
        }
        temp = -1;
        for (int i = 0; i < 101; ++i)
        {
            if (temp <= arr[i])
            {
                temp = arr[i];
                num = i;
            }
        }
        printf("#%d %d\n", t, num);
    }
}
