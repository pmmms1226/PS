//#include<iostream>
//#include<algorithm>
//#include<stdio.h>
//
///*
//인접행렬
//플로이드
//시간: o(V^3)
//공간: o(V^2)
//*/
//using namespace std;
//#define INF 100000000
//int G[801][801];
//int V, E;
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &V, &E);
//	int a, b, c;
//	for (int i = 1; i <= V; i++) {
//		for (int j = 1; j <= V; j++) {
//			if (i == j) G[i][i] = 0;
//			else G[i][j] = INF;
//		}
//	}
//	for (int i = 0; i < E; i++) {
//		scanf("%d %d %d", &a, &b , &c);
//		G[a][b] = c;
//		G[b][a] = c;
//	}
//	for (int k = 1; k <= V; k++) {
//		for (int i = 1; i <= V; i++) {
//			for (int j = 1; j <= V; j++) {
//				if (G[i][j] > G[i][k] + G[k][j])
//					G[i][j] = G[i][k] + G[k][j];
//			}
//		}
//	}
//	scanf("%d %d", &a, &b);
//	long long ans;
//	ans = min(G[1][a] + G[a][b] + G[b][V], G[1][b] + G[b][a] + G[a][V]);
//	if (ans >= INF) printf("%d\n" , -1);
//	else printf("%lld\n", ans);
//	
//	return 0;
//}