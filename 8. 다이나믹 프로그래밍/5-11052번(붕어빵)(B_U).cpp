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
//int dp[10001];
//int money[1001];
//int N;
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &money[i]);
//		dp[i] = money[i];
//	}
//	for (int i = 2; i <= N; i++) {
//		int max = dp[i];
//		for (int j = 1; j < i; j++) {
//			int val = dp[i - j] + money[j];
//			if (max < val) max = val;
//		}
//		dp[i] = max;
//	}
//	printf("%d", dp[N]);
//	return 0;
//}