//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int N, M;
//int map[1001][1001];
//int dp[1002][1002];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &M);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	dp[1][1] = map[1][1];
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + map[i+1][j ]);
//			dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + map[i][j+1]);
//			dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + map[i + 1][j + 1]);
//		}		
//	}
//	printf("%d", dp[N][M]);
//	return 0;
//}