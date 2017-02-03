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
//#define INF 1000000
//int N;
//int main() {
//	//#ifdef _CONSOLE
//	//	freopen("intput.txt", "r", stdin);
//	//#endif
//	scanf("%d", &N);
//	for (int i = 2; i <= N; i++) {
//		dp[i] = dp[i - 1] + 1;
//		if (i % 2 == 0) {
//			if (dp[i] > dp[i /2] + 1) dp[i] = dp[i/2] + 1;
//		}
//		if (i % 3 == 0) {
//			if (dp[i] > dp[i /3] + 1) dp[i] = dp[i/3] + 1;
//		}
//	}
//	printf("%d", dp[N]);
//	return 0;
//}