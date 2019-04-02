#include<iostream>
#include<cmath>
using namespace std;
int T;
long long N;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    for (int test = 1; test <= T; ++test)
    {
        cin >> N;
        int i = cbrt(N);
        if (pow(i, 3) == N)
            cout << "#" << test << " " << i << "\n";
        else if (pow(i + 1, 3) == N)
            cout << "#" << test << " " << i+1 << "\n";
        else
            cout << "#" << test << " " << -1 << "\n";
    }
}
