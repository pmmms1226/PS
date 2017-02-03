//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int arr[2001];
//int dp[2001][2001];
//int N;
//int func(int i, int j) {
//	if (i > j) return 1;
//	int &ret = dp[i][j];
//	if (ret != -1) return ret;
//	int val = func(i + 1, j - 1);
//	if (arr[i] == arr[j] && val == 1) return ret = 1;
//	if (arr[i] != arr[j] || val == 0) return ret = 0;
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			dp[i][j] = -1;
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &arr[i]);
//		dp[i][i] = 1;
//	}
//	for (int i = 1; i <= N; i++) {
//		func(i, N);
//		func(1, i);
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