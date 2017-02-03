///*
//T_D
//½Ã°£ O(N)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//long long dp[101][11];
//int N;
//long long func(int i, int j) {
//	if (j < 0 || j > 9) return 0;
//	long long &ret = dp[i][j];
//	if (ret != -1) return ret;
//	return ret = (func(i - 1, j - 1) + func(i - 1, j + 1)) % 1000000000;
//
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 0; j <= 9; j++) {
//			dp[i][j] = -1;
//		}
//	}
//	for (int i = 1; i <= 9; i++) {
//		dp[1][i] = 1;
//	}
//	dp[1][0] = 0;
//	for (int i = 0; i <= 9; i++) {
//		func(N, i);
//	}
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 0; j <= 9; j++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}*/
//	long long sum = 0;
//	for (int i = 0; i <= 9; i++) {
//		sum = (sum + dp[N][i]) % 1000000000;
//	}
//	printf("%lld", sum);
//	return 0;
//
//}