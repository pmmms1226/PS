//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//using namespace std;
//int n;
//int arr[1001];
//int dp[1001];
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	dp[0] = arr[0];
//	for (int i = 1; i < n; i++) {
//		int max = 0;
//		for (int j = 0; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				if(max < dp[j])
//					max = dp[j];
//			}
//		}
//		dp[i] = arr[i] + max;
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		if (dp[i] > ans) ans = dp[i];
//	}
//	printf("%d", ans);
//	return 0;
//}