//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//#define INF 987654321
//int N, T;
//vector <int> v[101];
//int dp[101][21];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &T);
//	int a, b;
//	for (int i = 1; i <= N; i++) {
//		scanf("%d" , &a);
//		while (a--) {
//			scanf("%d", &b);
//			v[i].push_back(b);
//		}
//	}
//	for (int i = 0; i <= N; i++) {
//		for (int j = 1; j <= 20; j++) {
//			dp[i][j] = INF;
//		}
//	}
//	v[0].push_back(1);
//	dp[0][1] = 0;
//	for (int i = 0; i < N; i++) {
//		for (auto it1 : v[i]) {
//			int cur = it1;
//			int o = cur, a = cur + 1, c = cur - 1,b;
//			if (cur >= 10) b = 20;
//			else b = cur * 2;
//			for (auto it2 : v[i + 1]) {
//				if (it2 == o || it2 == a || it2 == c || it2 == b) {
//					dp[i + 1][it2] = min(dp[i+1][it2] , dp[i][it1]);
//				}
//				else {
//					dp[i + 1][it2] = min(dp[i + 1][it2], dp[i][it1] + 1);
//				}
//			}
//		}
//	}
//	int min = INF;
//	for (int i = 1; i <= 20; i++) {
//		if (dp[N][i] < min) min = dp[N][i];
//	}
//	if (min > T) printf("%d", -1);
//	else printf("%d", min);
//	return 0;
//}