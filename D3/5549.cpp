#include<iostream>
#include<string>
using namespace std;
int T;
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    for (int test = 1; test <= T; ++test)
    {
        string arr;
        cin >> arr;
        if(arr[arr.size()-1]%2==0)
            cout << "#" << test << " " << "Even" << "\n";
        else
            cout << "#" << test << " " << "Odd" << "\n";
 
    }
}
