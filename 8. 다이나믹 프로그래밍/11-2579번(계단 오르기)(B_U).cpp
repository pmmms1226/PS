///*
//B_U
//½Ã°£ O(N)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//int dp[301][2], N ;
//int arr[301];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	dp[1][1] = arr[1];
//	dp[2][1] = arr[2];
//	dp[2][2] = arr[2] + dp[1][1];
//	for (int i = 3; i <= N; i++) {
//		dp[i][2] = dp[i - 1][1] + arr[i];
//		dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + arr[i];
//	}
//	printf("%d", max(dp[N][1], dp[N][2]));
//	return 0;
//
//}