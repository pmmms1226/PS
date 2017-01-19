//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
//#include<string>
///*
//인접행렬
//시간: o(V^2)
//공간: o(V^2)
//*/
//
//using namespace std;
//int N, M , map[101][101];
//int d[4][2] = { {1,0} , {0,1} ,{-1,0} , {0,-1} };
//queue <int> q;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%1d", &map[i][j]);
//		}
//	}
//	q.push(0);
//	int x, y , xx ,yy;
//	map[0][0] = 1;
//	while (!q.empty()) {
//		x = q.front() / 100;
//		y = q.front() % 100;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			xx = x + d[i][0];
//			yy = y + d[i][1];
//			if (xx < 0 || yy < 0 || xx >= N || yy >= M) continue;
//			if (map[xx][yy] == 1) {
//				q.push(xx*100 + yy);
//				map[xx][yy] = map[x][y] + 1;
//			}
//		}
//	}
//	printf("%d\n", map[N-1][M-1]);
//	return 0;
//}