//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int n;
//int arr[101][101];
//long long dp[101][101];
//long long dfs(int x, int y) {
//	long long &ret = dp[x][y];
//	if (ret != -1) return ret;
//	if (x == n - 1 && y == n - 1) {
//		ret = 1;
//		return ret;
//	}
//	if (arr[x][y] == 0) return 0;
//	ret = 0;
//	for (int i = 0; i < 2; i++) {
//		switch (i) {
//		case 0://아래
//			if (x + arr[x][y] < n)
//				ret += dfs(x+arr[x][y], y);
//			break;
//		case 1://오른쪽
//			if (y + arr[x][y] < n)
//				ret += dfs(x, y+arr[x][y]);
//			break;
//		}
//	}
//	return ret;
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//			dp[i][j] = -1;
//		}
//	}
//	printf("%lld", dfs(0, 0));
//	return 0;
//}