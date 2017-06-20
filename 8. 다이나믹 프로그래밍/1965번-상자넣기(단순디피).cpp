//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int arr[1001];
//int dp[1001];
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	dp[0] = 1;
//	for (int i = 0; i < n; i++) {
//		int max = 0;
//		for (int j = 0; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				if (max < dp[j]) max = dp[j];
//			}
//			dp[i] = max+1;
//		}
//	}
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		if (max < dp[i]) max = dp[i];
//		//cout << dp[i] << ' ';
//	}
//	printf("%d", max);
//	
//	return 0;
//}