//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//#define INF 987654321
//int arr[21][21];
//int dp[17][65536];
//
//int n;
//int TSP(int visit, int idx) {
//	if (visit == (1 << n) - 1)
//		return arr[idx][0] == INF ? INF : arr[idx][0];
//	int &ret = dp[idx][visit];
//	if (ret != -1) return ret;
//	ret = INF;
//	for (int i = 0; i < n; i++) {
//		if (visit & (1 << i)) continue;
//		if (arr[idx][i] == INF) continue;
//		ret = min(ret, TSP(visit | (1 << i), i) + arr[idx][i]);
//	}
//	return ret;
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] == 0) arr[i][j] = INF;
//		}
//	}
//	memset(dp, -1, sizeof(dp));
//	printf("%d" , TSP(1, 0));
//
//	return 0;
//}