#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;
int dp[1000001];
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	/*
		에라토?? 의 체 사용.
	*/
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 2; i <= b; i++) {
		if (dp[i] == -1)continue;
		if (dp[i] == 0) {
			dp[i] = 1;
			for (int j = i+i; j <= b; j = j+ i) {
				dp[j] = -1;
			}
		}
	}
	for (int i = a; i <= b; i++) {
		if (dp[i] == 1) printf("%d\n", i);
	}
	return 0;
}