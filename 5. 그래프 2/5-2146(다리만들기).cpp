///*
//	인접행렬
//	시간: o(V^2)
//	공간: o(V^2)
//*/
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
//#include<string>
//
///*
//	단지 번호 붙이기 + 토마토 문제
//	bfs중 서로 다른 단지가 만나면 길이 출력.
//*/
//using namespace std;
//int N;
//int map[101][101], dist[101][101], cnt ;
//int d[4][2] = { {1,0} , {0,1} , {-1,0} , {0,-1} };
//queue <pair<int, int> > q;
//void dfs(int x, int y) {
//	if (x < 0 || y < 0 || x >= N || y >= N) return;
//	map[x][y] = cnt;
//	int xx, yy;
//	for (int i = 0; i < 4; i++) {
//		xx = x + d[i][0];
//		yy = y + d[i][1];
//		if (xx < 0 || yy < 0 || xx >= N || yy >= N) continue;
//		if (map[xx][yy] == -1) {
//			dfs(xx, yy);
//		}
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &map[i][j]);
//			if (map[i][j] == 1) {
//				map[i][j] = -1;
//				q.push(make_pair(i, j));
//			}
//		}
//	}
//	//섬을 그룹으로 나누기.(단지 번호 붙이기)
//	cnt = 1;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (map[i][j] == -1) {
//				dfs(i, j);
//				cnt++;
//			}
//		}
//	}
//	//거리 구하기.
//	int x, y, xx, yy;
//	int min = 987654321;
//	while (!q.empty()) {
//		x = q.front().first;
//		y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			xx = x + d[i][0];
//			yy = y + d[i][1];
//			if (xx < 0 || yy < 0 || xx >= N || yy >= N) continue;
//			if (map[xx][yy] == 0) {
//				q.push(make_pair(xx, yy));
//				map[xx][yy] = map[x][y];
//				dist[xx][yy] = dist[x][y] + 1;
//			}
//			else if (map[xx][yy] != map[x][y]) {
//				if (min > dist[xx][yy] + dist[x][y]) min = dist[xx][yy] + dist[x][y];
//			}
//		}
//	}
//	printf("%d\n", min);
//	/*for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << endl;
//	}*/
//	return 0;
//}