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
//int func(int cur) {
//	if (cur <= 0) return 0;
//	int &ret = dp[cur];
//	if (ret != -1) return ret;
//	return ret = func(cur - 3) + func(cur - 2) + func(cur - 1);
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d", &N);
//		for (int i = 0; i <= N; i++) {
//			dp[i] = -1;
//		}
//		dp[1] = 1;
//		dp[2] = 2;
//		dp[3] = 4;
//		func(N);
//		printf("%d\n", dp[N]);
//	}
//
//	return 0;
//}