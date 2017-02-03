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
//int dp[10001];
//int money[1001];
//int N;
//int func(int cur) {
//	if (cur == 1) {
//		return dp[cur];
//	}
//	int &ret = dp[cur];
//	if (ret != 0) return ret;
//	int max = money[cur];
//	for (int i = 1; i < cur; i++) {
//		int val = func(cur - i) + money[i];
//		if (max < val) max = val;
//	}
//	return ret = max;
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &money[i]);
//	}
//	dp[1] = money[1];
//	func(N);
//	printf("%d", dp[N]);
//	return 0;
//}