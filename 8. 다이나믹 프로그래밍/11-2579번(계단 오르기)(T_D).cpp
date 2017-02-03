///*
//T_D
//½Ã°£ O(N)
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//int dp[301][3], N;
//int arr[301];
//int func(int cur , int cnt) {
//	if (cur < 1) return 0;
//	int &ret = dp[cur][cnt];
//	if (ret != -1) return ret;
//	if (cnt == 1) return ret = max(func(cur - 2, 1), func(cur - 2, 2)) + arr[cur];
//	else return ret = func(cur - 1, 1) + arr[cur];
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i <= N; i++) {
//		dp[i][1] = -1;
//		dp[i][2] = -1;
//	}
//	func(N, 1);
//	func(N, 2);
//	printf("%d", max(dp[N][1], dp[N][2]));
//	return 0;
//
//}