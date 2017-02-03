///*
//B_U
//½Ã°£ : O(N^2)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int arr[501][501], dp[501][501];
//int N;
//int func(int i, int j) {
//	if (i < 1 || j < 1) return 0;
//	int &ret = dp[i][j];
//	if (ret != -1) return ret;
//	return ret = max(func(i - 1, j), func(i - 1, j - 1)) + arr[i][j];
//
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= i; j++) {
//			scanf("%d", &arr[i][j]);
//			dp[i][j] = -1;
//		}
//	}
//	dp[1][1] = arr[1][1];
//	for (int i = N; i >= 1; i--) {
//		func(N,i);
//	}
//	int max = 0;
//	//for (int i = 1; i <= N; i++) {
//	//	for (int j = 1; j <= N; j++) {
//	//		cout << dp[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//	for (int i = 1; i <= N; i++) {
//		if (max < dp[N][i]) max = dp[N][i];
//	}
//	printf("%d", max);
//	return 0;
//}