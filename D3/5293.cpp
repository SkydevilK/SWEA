#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string sol() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	if (abs(B - C) > 1) return "impossible";
	else {
		string str = "";
		if (B == 0 && C == 0) {
			if (A > 0 && D > 0) {
				str = "impossible";
			}
			else {
				if (A > 0) {
					A++;
					while (A--) str += "0";
				}
				if (D > 0) {
					D++;
					while (D--) str += "1";
				}
			}
		}
		else {
			str = "0";
			while (B > 0 && C > 0) {
				str += "10";
				B--; C--;
			}
			if (B > C) {
				str += "1";
				while (A--) str = "0" + str;
				while (D--) str += "1";
			}
			else if (B < C) {
				str = "1" + str;
				while (A--) str += "0";
				while (D--) str = "1" + str;
			}
			else {
				while (A--) str += "0";
				if (D > 0) {
					string temp = str.substr(1, str.length() - 1);
					while (D--) temp = "1" + temp;
					str = "0" + temp;
				}
			}
		}
		return str;
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;
	for (int test = 1; test <= T; ++test)
	{
		cout << "#" << test << " " << sol() << "\n";
	}
}
