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
//	if (ret != -1) {
//		return ret;
//	}
//	return ret = (func(cur - 1) + func(cur - 2))% 10007;
//}
//int main() {
//	//#ifdef _CONSOLE
//	//	freopen("intput.txt", "r", stdin);
//	//#endif
//	scanf("%d", &N);
//	for (int i = 0; i <= N; i++) {
//		dp[i] = -1;
//	}
//	dp[1] = 1; 
//	dp[2] = 2;
//	func(N);
//	printf("%d", dp[N]);
//	return 0;
//}