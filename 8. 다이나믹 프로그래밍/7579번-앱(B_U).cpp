///*
//특이 사항
//1.앞에서 부터 더해 나가면 중복해서 더하는 값이 생김.
//2.그래서 뒤에서 부터 더해야함.
//*/
//
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int arr[101];
//int cost[101];
//int dp[10200];
//
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int size = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &cost[i]);
//		size += cost[i];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = size; j >= cost[i]; j--) {
//			dp[j] = max(dp[j], dp[j - cost[i]] + arr[i]);
//		}
//	}
//	for (int i = 0; i <= size; i++) {
//		//cout << dp[i] << ' ';
//		if (dp[i] >= m) {
//			printf("%d", i);
//			break;
//		}
//	}
//	return 0;
//}