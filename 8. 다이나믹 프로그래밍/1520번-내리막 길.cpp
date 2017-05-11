//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int n, m;
//int arr[501][501];
//int d[4][2] = { {0,1}, {1,0} , {-1,0}, {0,-1} };
//int visit[501][501];
//int dp[501][501];
//int dfs(int x, int y) {
//	int &ret = dp[x][y];
//	if (ret != -1) return ret;
//	visit[x][y] = 1;
//	if( x == n - 1 && y == m - 1) {
//		visit[x][y] = 0;
//		return ret = 1;
//	}
//	ret = 0;
//	for (int i = 0; i < 4; i++) {
//		int xx = x + d[i][0], yy = y + d[i][1];
//		if (xx < 0 || yy < 0 || xx >= n || yy >= m)continue;
//		if (visit[xx][yy] == 0) {
//			if (arr[xx][yy] < arr[x][y]) {
//				ret += dfs(xx, yy);
//			}
//		}
//	}
//	visit[x][y] = 0;
//	return ret;
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &arr[i][j]);
//			dp[i][j] = -1;
//		}
//	}
//	printf("%d", dfs(0, 0));
//	return 0;
//}