///*
// B_U
//
//*/
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int dp[10001] , money[101];
//int n, k;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &n, &k);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &money[i]);
//	}
//	dp[0] = 1;
//	for (int i = 0; i <n ; i++) {
//		for (int j = 0; j <= k; j++) {
//			if (j + money[i] <= k)
//				dp[j + money[i]] = dp[j] + dp[j + money[i]];
//		}
//	}
//	/*for (int i = 0; i <= k; i++) {
//		printf("%d ", dp[i]);
//	}*/
//	printf("%d", dp[k]);
//	return 0;
//}