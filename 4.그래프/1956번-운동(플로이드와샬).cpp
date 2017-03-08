//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int  V, E;
//#define INF 987654321
//int arr[401][401];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &V, &E);
//	int a, b, c;
//	for (int i = 1; i <= V; i++) {
//		for (int j = 1; j <= V; j++) {
//			if (i == j) arr[i][j] = 0;
//			else
//			arr[i][j] = INF;
//		}
//	}
//	for (int i = 0; i < E; i++) {
//		scanf("%d %d %d", &a, &b, &c);
//		arr[a][b] = c;
//	}
//	for (int k = 1; k <= V; k++) {
//		for (int i = 1; i <= V; i++) {
//			for (int j = 1; j <= V; j++) {
//				if (arr[i][j] > arr[i][k] + arr[k][j])
//					arr[i][j] = arr[i][k] + arr[k][j];
//			}
//		}
//	}
//	int min = INF;
//	for (int i = 1; i <= V; i++) {
//		for (int j = 1; j <= V; j++) {
//			if (i == j) continue;
//			if (arr[i][j] != INF && arr[j][i] != INF) {
//				if (min > arr[i][j]+arr[j][i]) {
//					min = arr[i][j]+arr[j][i];
//				}
//			}
//		}
//	}
//	if (min == INF) printf("-1");
//	else printf("%d", min);
//	return 0;
//}