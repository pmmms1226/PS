///*
//B_U
//½Ã°£ O(N*M)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//int N, M;
//long long arr[301][301] , sum[301][301];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &M);
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			scanf("%lld", &arr[i][j]);
//			if (i == 1 && j == 1) sum[i][j] = arr[i][j];
//			if (i == 1 && j != 1) sum[i][j] = arr[i][j] + sum[i][j - 1];
//			if (j == 1 && i != 1) sum[i][j] = arr[i][j] + sum[i - 1][j];
//			if (i != 1 && j != 1) sum[i][j] = arr[i][j] + sum[i - 1][j] + sum[i][j - 1] -sum[i-1][j-1];
//		}
//	}
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int a, b, c, d;
//		int sum1, sum2, sum3;
//		scanf("%d %d %d %d", &a, &b, &c, &d);
//		if (a == 1) sum1 = 0;
//		else sum1 = sum[a - 1][d];
//		if (b == 1) sum2 = 0;
//		else sum2 = sum[c][b - 1];
//		if (a == 1 || b == 1) sum3 = 0;
//		else sum3 = sum[a - 1][b - 1];
//		printf("%lld\n", sum[c][d] - sum1 - sum2 + sum3);
//	}
//
//	//for (int i = 1; i <= N; i++) {
//	//	for (int j = 1; j <= M; j++) {
//	//		cout << sum[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//
//
//	return 0;
//
//}