///*
//B_U
//
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int N;
//int dp[100001] , arr[100001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i <= N; i++) {
//		dp[i] = max(dp[i - 1] + arr[i], dp[i]+arr[i]);
//	}
//	int max = -100000000;
//	for (int i = 1; i <= N; i++) {
//		if (max < dp[i]) max = dp[i];
//	}
//	printf("%d", max);
//	return 0;
//}