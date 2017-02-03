//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int N , dp[100001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		dp[i] = i;
//	}
//	for (int i = 4; i <= N; i++) {
//		for (int j = 2; j*j <= i; j++) {
//			dp[i] = min(dp[i], dp[i - j*j] + 1);
//		}
//	}
//	printf("%d", dp[N]);
//	return 0;
//}