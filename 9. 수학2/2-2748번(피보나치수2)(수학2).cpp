//#include<iostream>
//#include<string>
//#include<cstdio>
//#include<stack>
//#include<cmath>
//using namespace std;
//int N;
//long long dp[100];
//long long func(int idx) {
//	long long &ret = dp[idx];
//	if (ret != -1) return ret;
//	return ret = func(idx - 2) + func(idx - 1);
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 0; i <= N; i++) {
//		dp[i] = -1;
//	}
//	dp[0] = 0;
//	dp[1] = 1;
//	func(N);
//	printf("%lld", dp[N]);
//	return 0;
//}