///*
//B_U
//½Ã°£ : O(N^2)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int arr[501][501] , dp[501][501];
//int N;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= i; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	dp[1][1] = arr[1][1];
//	for (int i = 2; i <= N; i++) {
//		for (int j = 1; j <= i; j++) {
//			if (j == 1) dp[i][j] = arr[i][j] + dp[i - 1][j];
//			else if (j == i) dp[i][j] = arr[i][j] + dp[i - 1][j - 1];
//			else {
//				dp[i][j] = arr[i][j]+max(dp[i - 1][j], dp[i - 1][j - 1]);
//			}
//		}
//	}
//	int max = 0;
//	for (int i = 1; i <= N; i++) {
//		if (max < dp[N][i]) max = dp[N][i];
//	}
//	printf("%d", max);
//	return 0;
//}