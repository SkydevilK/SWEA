#include<iostream>
using namespace std;
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int test_case;
    int T;
    int N, K;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case)
    {
        cin >> N >> K;
        if (N % K == 0)
            cout << "#" << test_case << " 0\n";
        else
            cout << "#" << test_case << " 1\n";
    }
    return 0;
}
