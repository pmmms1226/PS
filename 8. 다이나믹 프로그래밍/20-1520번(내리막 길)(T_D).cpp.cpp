///*
//T_D
//½Ã°£ ??
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int d[4][2] = { {1,0} , {-1,0} , {0,1},{0,-1} };
//int map[501][501] , dp[501][501];
//int N, M;
//int func(int x, int y) {
//	if (x == 1 && y == 1)
//		return 1;
//	int &ret = dp[x][y];
//	if (ret != 0) return ret;
//	for (int i = 0; i < 4; i++) {
//		int xx = x + d[i][0], yy = y + d[i][1];
//		if (xx < 0 || yy < 0 || xx > M || yy > N) continue;
//		if (map[x][y] < map[xx][yy]) {
//			ret += func(xx, yy);
//		}
//	}
//	return ret;
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &M, &N);
//	for (int i = 1; i <= M; i++) {
//		for (int j = 1; j <= N; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	func(M, N);
//	printf("%d", dp[M][N]);
//	return 0;
//}