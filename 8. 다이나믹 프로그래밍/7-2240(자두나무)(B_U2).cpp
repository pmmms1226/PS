///*
//B_U
//½Ã°£ : O(T*W)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int T, W;
//int arr[1001], dp[1001][31];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &T, &W);
//	for (int i = 1; i <= T; i++) {
//		scanf("%d", &arr[i]);
//	}
//	dp[0][0] = 0;
//	for (int i = 1; i <= T; i++) {
//		for (int j = 0; j <= W; j++) {
//			if (j == 0) {
//				dp[i][j] = dp[i - 1][j];
//			}
//			else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]);
//			if (arr[i] == 1 && j % 2 == 0) {
//				dp[i][j]++;
//			}
//			else if (arr[i] == 2 && j % 2 == 1) {
//				dp[i][j]++;
//			}
//		}
//	}
//	int max = 0;
//	for (int i = 0; i <= W; i++) {
//		if (max < dp[T][i]) max = dp[T][i];
//	}
//	printf("%d", max);
//	return 0;
//}