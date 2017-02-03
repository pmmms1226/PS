///*
//B_U
//
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//#define INF 100000000
//int dp[10001], money[101];
//int n, k;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &n, &k);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &money[i]);
//	}
//	for (int i = 1; i <= k; i++) {
//		dp[i] = INF;
//	}
//	dp[0] = 0;
//	for (int i = 0; i <n; i++) {
//		for (int j = 0; j <= k; j++) {
//			if (j + money[i] <= k) {
//				dp[j + money[i]] = min(dp[j] + 1, dp[j + money[i]]);
//			}
//		}
//	}
//	/*for (int i = 0; i <= k; i++) {
//	printf("%d ", dp[i]);
//	}*/
//	if (dp[k] == INF) printf("-1");
//	else printf("%d", dp[k]);
//	return 0;
//}