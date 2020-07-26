#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T;
    double p,q,s1,s2; 
    cin >> T;
    for (int test_case = 1; test_case <= T; ++test_case)
    {
        cin>>p>>q;
        s1 = (1-p)*q;
        s2 = p*(1-q)*q;

        if(s1<s2)
        cout << "#" << test_case << " YES\n";
        else
        cout << "#" << test_case << " NO\n";
    }
    return 0;
}
