//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//
//int N;
//int arr[21][21];
//int dist[21][21];
//int ans=0;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			scanf("%d", &arr[i][j]);
//			dist[i][j] = arr[i][j];
//		}
//	}
//	for (int k = 1; k <= N; k++) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (i == k || k == j) continue;
//				if (dist[i][j] > dist[i][k] + dist[k][j]) {
//					printf("%d", -1);
//					return 0;
//				}
//				if (dist[i][j] == dist[i][k] + dist[k][j]) {
//					arr[i][j] = 0;
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			ans += arr[i][j];
//		}
//	}
//	printf("%d\n", ans/2);
//	return 0;
//}