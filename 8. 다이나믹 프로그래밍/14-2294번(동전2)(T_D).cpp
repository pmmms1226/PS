/*
B_U

*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define INF 100000000
int dp[10001], money[101];
int n, k;
int sol(int idx) {
	if (idx < 0) return INF;
	int &ret = dp[idx];
	if (ret != -1) return ret;
	ret = INF;
	for (int i = 0; i < n; i++) {
		ret = min(ret, sol(idx - money[i]) + 1);
	}
	return ret;
}
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &money[i]);
	}
	for (int i = 1; i <= k; i++) {
		dp[i] = -1;
	}
	dp[0] = 0;
	sol(k);
	/*for (int i = 0; i <= k; i++) {
	printf("%d ", dp[i]);
	}*/
	if (dp[k] == INF) printf("-1");
	else printf("%d", dp[k]);
	return 0;
}