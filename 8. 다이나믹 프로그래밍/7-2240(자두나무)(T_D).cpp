///*
//T_D
//½Ã°£ : O(T*W)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int T, W;
//int arr[1001], dp[1001][31];
//int sol(int i , int j) {
//	if (i < 0 || j < 0) return -1;
//	int &ret = dp[i][j];
//	if (ret != -1) return ret;
//	ret = max(sol(i - 1, j), sol(i - 1, j - 1));
//	if (arr[i] == 1 && j % 2 == 0) {
//		ret++;
//	}
//	else if (arr[i] == 2 && j % 2 == 1) {
//		ret++;
//	}
//	return ret;
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &T, &W);
//	for (int i = 1; i <= T; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i <= T; i++) {
//		for (int j = 0; j <= W; j++) {
//			dp[i][j] = -1;
//		}
//	}
//	dp[0][0] = 0;
//	for (int i = 0; i <= W; i++) {
//		sol(T, i);
//	}
//	int max = 0;
//	for (int i = 0; i <= W; i++) {
//		if (max < dp[T][i]) max = dp[T][i];
//	}
//	printf("%d", max);
//	return 0;
//}