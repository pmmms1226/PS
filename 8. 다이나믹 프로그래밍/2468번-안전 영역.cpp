//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<queue>
//using namespace std;
//int n;
//int arr[101][101];
//int visit[101][101];
//int d[4][2] = { {0,1} , {1,0} , {-1,0} , {0,-1} };
//void dfs(int x, int y , int k ) {
//	visit[x][y] = 1;
//	for (int i = 0; i < 4; i++) {
//		int xx = x + d[i][0], yy = y + d[i][1];
//		if (xx < 0 || yy < 0 || xx >= n || yy >= n) continue;
//		if (arr[xx][yy] < k) continue;
//		if (visit[xx][yy] == 1) continue;
//		dfs(xx, yy ,k);
//	}
//
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int cnt = 0;
//	int ans = 0;
//	for (int k = 1; k <= 100; k++) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				visit[i][j] = 0;
//			}
//		}
//		cnt = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (arr[i][j] < k || visit[i][j] == 1) continue;
//				dfs(i, j , k);
//				cnt++;
//			}
//		}
//		if (ans < cnt) ans = cnt;
//	}
//	printf("%d", ans);
//	return 0;
//}