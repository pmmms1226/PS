//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int dp[10001][3], arr[10001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", arr + i);
//	}
//	dp[0][1] = arr[0];
//	for (int i = 1; i < n; i++) {
//		int d = i - 1, dd= i - 2;
//		dp[i][2] = arr[i] + dp[d][1];
//		dp[i][0] = max(max(dp[d][1], dp[d][2]), dp[d][0]);
//		if (dd >= 0)
//			dp[i][1] = max(max(dp[dd][2], dp[dd][1]), dp[d][0]) + arr[i];
//		else
//			dp[i][1] = arr[i];
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= 2; j++) {
//			if (dp[i][j] > ans) ans = dp[i][j];
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}