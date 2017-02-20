//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//#include<queue>
//using namespace std;
//#define INF 987654321
//int N , M;
//int map[101][101];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N , &M);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (i == j) map[i][j] = 0;
//			else {
//				map[i][j] = INF;
//			}
//		}
//	}
//	int a, b, c;
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d %d", &a, &b, &c);
//		map[a][b] = min(map[a][b], c);
//	}
//	
//	for (int k = 1; k <= N; k++) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j<= N; j++) {
//				if (map[i][j] > map[i][k] + map[k][j])
//					map[i][j] = map[i][k] + map[k][j];
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j] == INF) map[i][j] = 0;
//			printf("%d ", map[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}