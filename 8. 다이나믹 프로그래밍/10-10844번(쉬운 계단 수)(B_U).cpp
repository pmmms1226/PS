///*
//B_U
//½Ã°£ O(N*9)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//long long dp[101][11];
//int N;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= 9; i++) {
//		dp[1][i] = 1;
//	}
//	for (int i = 2; i <= N; i++) {
//		for (int j = 0; j <= 9; j++) {
//			if (j == 0) dp[i][j] = dp[i - 1][j + 1];
//			else if (j == 9) dp[i][j] = dp[i - 1][j - 1];
//			else {
//				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1])%1000000000;
//			}
//		}
//	}
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 0; j <= 9; j++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}*/
//	long long sum = 0;
//	for (int i = 0; i <= 9; i++) {
//		sum = (sum+ dp[N][i]) % 1000000000;
//	}
//	printf("%lld", sum);
//	return 0;
//
//}