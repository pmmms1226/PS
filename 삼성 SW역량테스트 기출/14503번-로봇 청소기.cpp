//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
//using namespace std;
//int n, m, rcx, rcy , dir;
//int d[4][2] = { {-1,0} , {0,1} , {1, 0} , {0,-1} };
//int arr[51][51];
//int ans = 0;
//void dfs(int x, int y, int dir, bool back) {
//	if (arr[x][y] == 0) {
//		ans++;
//		arr[x][y] = 2;
//	}
//	bool go = false;
//	for (int i = dir-1; i> dir-1-4; i--) {
//		int tmp = (i+4) % 4;
//		int xx = x + d[tmp][0], yy = y + d[tmp][1];
//		if (xx < 0 || yy < 0 || xx >= n || yy >= m) continue;
//		if (arr[xx][yy] != 2 && arr[xx][yy] != 1) {
//			go = true;
//			dfs(xx, yy, tmp, false);
//			break;
//		}
//	}
//	if (!go) {
//		int tmp = (dir + 2) % 4;
//		if(arr[x+d[tmp][0]][y+d[tmp][1]] != 1)
//			dfs(x + d[(dir + 2) % 4][0], y + d[(dir + 2) % 4][1], dir, true);
//	}
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	//0: ºÏ 1: µ¿ 2: ³² 3: ¼­
//	scanf("%d %d", &n, &m);
//	scanf("%d %d %d", &rcx, &rcy, &dir);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	dfs(rcx, rcy, dir, false);
//	printf("%d", ans);
//	return 0;
//}