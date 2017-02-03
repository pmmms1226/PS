///*
//dfs로 풀기
//시간 O(M*N)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int d[4][2] = { {1,0} , {-1,0} , {0,1},{0,-1} };
//int map[501][501];
//int N, M;
//int ans;
//void dfs(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		int xx = x + d[i][0], yy = y + d[i][1];
//		if (xx < 0 || yy < 0 || xx >= M || yy >= N) continue;
//		if ((xx == M - 1 && yy == N - 1)) ans++;
//		else if( map[xx][yy]<map[x][y]){
//			dfs(xx, yy);
//		}
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &M, &N);
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	//for (int i = 0; i < M; i++) {
//	//	for (int j = 0; j < N; j++) {
//	//		cout << map[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//	dfs(0, 0);
//	printf("%d", ans);
//	return 0;
//}