#include<iostream>
#include<string>
#include<cstdio>
int T;
int N;
std::string X;
int main() {
	scanf("%d", &T);
	for (int t = 1; t <= T; ++t) {
		scanf("%d", &N);
		std::cin >> X;
		--N;
		int result = 0;
		for (int i = 0; i < X.length(); i++) {
			result += (X[i] - '0');
		}
		result %= N;
		printf("#%d %d\n", t, result);
	}
}
