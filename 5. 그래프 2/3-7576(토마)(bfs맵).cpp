//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
///*
//인접행렬
//시간: o(V^2)
//공간: o(V^2)
//*/
///*
//	주의: 2개의 큐를 쓰면 메모리 초과.......
//	큐 1개 < 1000 x 1000??????????
//*/
//using namespace std;
//
//int N, M;
//int map[1001][1001] , check[1001][1001];
//int d[4][2] = { {1,0} , {0,1} , {-1,0} , {0 , -1} };
//queue <pair<int , int> > idx;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &M);
//	bool isOne = true;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &map[i][j]);
//			if (map[i][j] == 1) {
//				idx.push(make_pair(i, j));
//			}
//			else isOne = false;
//		}
//	}
//	if (isOne == true) {
//		printf("0\n");
//		return 0;
//	}
//	int x, y , xx ,yy;
//	while (!idx.empty()) {
//		x = idx.front().first;
//		y = idx.front().second;
//		idx.pop();
//		for (int i = 0; i < 4; i++) {
//			xx = x + d[i][0];
//			yy = y + d[i][1];
//			if (xx < 0 || yy < 0 || xx >= M || yy >= N) continue;
//			if (map[xx][yy] == 0 && check[xx][yy] == 0) {
//				idx.push(make_pair(xx, yy));
//				check[xx][yy] = check[x][y]+1;
//				map[xx][yy] = 1;
//			}
//		}
//		
//	}
//	int max = 0; bool end = false;
//	for (int i = 0; i < M; i++) {
//		for (int j = 0; j < N; j++) {
//			if (max < check[i][j]) max = check[i][j];
//			if (map[i][j] == 0) end = true;
//		}
//		if (end == true) break;
//	}
//	if (end == true) printf("-1\n");
//	else printf("%d\n", max);
//	
//	return 0;
//}