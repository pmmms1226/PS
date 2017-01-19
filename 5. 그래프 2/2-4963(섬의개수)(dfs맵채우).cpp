//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//
///*
//인접행렬
//시간: O(V^2)
//공간: O(V^2)
//*/
//using namespace std;
//int d[8][2] = { {1,0} , {0,1} , {-1,0} , {0,-1} , {1,1} , {1,-1} , {-1,1} , {-1,-1} };
//int cnt;
//int map[51][51];
//int h, w;
//void dfs(int x, int y) {
//	if (x < 0 || y < 0 || x >= h || y >= w) return;
//	int tempX, tempY;
//	map[x][y] = -1;
//	for (int i = 0; i < 8; i++) {
//		tempX = x + d[i][0];
//		tempY = y + d[i][1];
//		if (tempX < 0 || tempY < 0 || tempX >= h || tempY >= w) continue;
//		if (map[tempX][tempY] == 1) {
//			dfs(tempX, tempY);
//		}
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	while (1) {
//		cnt = 0;
//		scanf("%d %d", &w, &h);
//		if (w == 0 && h == 0) break;
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				scanf("%d", &map[i][j]);
//			}
//		}
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				if (map[i][j] == 1) {
//					cnt++;
//					dfs(i, j);
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}