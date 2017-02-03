///*
//DP T_D
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
//	int &ret = dp[cur];
//	if (ret != -1) return ret;
//	if (cur % 2 == 0) {
//		return ret = (func(cur - 1)*2 + 1) % 10007;
//	}
//	else {
//		return ret = (func(cur - 1)*2 - 1) % 10007;
//	}
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i <= N; i++) {
//		dp[i] = -1;
//	}
//	func(N);
//	printf("%d", dp[N]);
//
//	return 0;
//}