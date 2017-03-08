//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int N, M;
//#define INF 987654321
//int arr[101][101];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &M);
//	int a, b;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (i == j) arr[i][j] = 0;
//			else {
//				arr[i][j] = INF;
//			}
//		}
//	}
//	for (int i = 1; i <= M; i++) {
//		scanf("%d %d", &a, &b);
//		arr[a][b] = 1;
//		arr[b][a] = 1;
//	}
//	for (int k = 1; k <= N; k++) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (arr[i][j] > arr[i][k] + arr[k][j])
//					arr[i][j] = arr[i][k] + arr[k][j];
//			}
//		}
//	}
//	int ans;
//	int min = INF;
//	for (int i = 1; i <= N; i++) {
//		int sum = 0;
//		for (int j = 1; j <= N; j++) {
//			if (arr[i][j] == INF) continue;
//			sum += arr[i][j];
//		}
//		if (sum < min) {
//			min = sum;
//			ans = i;
//		}
//		else if (sum == min);
//	}
//	printf("%d", ans);
//	return 0;
//}