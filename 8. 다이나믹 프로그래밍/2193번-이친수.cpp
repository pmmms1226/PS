#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
long long N , dp[91];
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%lld", &N);
	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i <= N; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	printf("%lld", dp[N]);

	return 0;
}