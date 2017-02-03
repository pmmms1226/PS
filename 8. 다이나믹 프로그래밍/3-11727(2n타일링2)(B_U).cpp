///*
//DP B_U
//시간 : O(N)
//공간 : O(N)
//*/
//#include<iostream>
//#include<cstdio>
//#include<string>
//#include<cmath>
//#include<queue>
//using namespace std;
//int dp[1000001];
//int diff[1000001];
//#define INF 1000000
//int N;
//int main() {
//	scanf("%d", &N);
//	dp[1] = 1;
//	for (int i = 2; i <= N; i++) {
//		if (i % 2 == 0) {
//			dp[i] = (dp[i - 1] * 2 + 1)%10007;
//		}
//		else {
//			dp[i] = (dp[i - 1] * 2 - 1) % 10007;
//		}
//	}
//	printf("%d", dp[N]);
//
//	return 0;
//}