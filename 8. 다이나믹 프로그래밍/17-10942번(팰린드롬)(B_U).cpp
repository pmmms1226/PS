//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int arr[2001];
//int dp[2001][2001];
//int N;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &arr[i]);
//		dp[i][i] = 1;
//	}
//	for (int k = 1; k < N; k++) {
//		for (int i = 1; i <= N; i++) {
//			int front = i, end = i+k;
//			if (end > N) break;
//			if (k == 1) {
//				if (arr[front] == arr[end]) dp[i][i + k] = 1;
//			}
//			else {
//				if (arr[front] == arr[end] && dp[front + 1][end - 1] == 1) dp[i][i + k] = 1;
//			}
//		}
//	}
//	/*for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}*/
//	int M;
//	scanf("%d", &M);
//	while (M--) {
//		int S, E;
//		scanf("%d %d", &S, &E);
//		printf("%d\n", dp[S][E]);
//	}
//	return 0;
//}