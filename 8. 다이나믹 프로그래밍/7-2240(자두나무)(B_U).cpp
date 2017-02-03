///*
//	B_U
//	½Ã°£ : O(T*W)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int T, W;
//int arr[1001] , dp[3][1001][31];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &T, &W);
//	for (int i = 1; i <= T; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i <= T; i++) {
//		for (int j = 0; j <= W; j++) {
//			if (arr[i] == 1) {
//				if (j == 0) {
//					dp[2][i][j] = dp[2][i - 1][j];
//					dp[1][i][j] = dp[1][i - 1][j] + 1;
//				}
//				else {
//					dp[2][i][j] = max(dp[2][i - 1][j], dp[1][i - 1][j - 1]);
//					dp[1][i][j] = max(dp[1][i - 1][j] + 1, dp[2][i - 1][j - 1] + 1);
//				}
//			}
//			else {
//				if (j == 0) {
//					dp[1][i][j] = dp[1][i - 1][j];
//				}
//				else {
//					dp[2][i][j] = max(dp[2][i - 1][j] + 1, dp[1][i - 1][j - 1] + 1);
//					dp[1][i][j] = max(dp[1][i - 1][j], dp[2][i - 1][j - 1]);
//				}
//			}
//		}
//	}
//	int ans=0;
//	for(int i = 0; i <= W; i++) {
//		if (ans < max(dp[1][T][i], dp[2][T][i]))
//			ans = max(dp[1][T][i], dp[2][T][i]);
//	}
//	printf("%d", ans);
//
//	return 0;
//}