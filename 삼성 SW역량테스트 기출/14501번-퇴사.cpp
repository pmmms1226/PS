//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int arr[16][2], dp[25], big[25];
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d %d", &arr[i][0], &arr[i][1]);
//	}
//	for (int i = n; i >= 1; i--) {
//		int there = i + arr[i][0];
//		if (there - 1 > n) {
//			dp[i] = 0;
//			big[i] = big[i + 1];
//		}
//		else {
//			dp[i] = big[there] + arr[i][1];
//			big[i] = max(dp[i], big[i + 1]);
//		}
//	}
//	//for (int i = 1; i <= n; i++) {
//	//	cout << dp[i] << ' ';
//	//}
//	//cout << endl;
//	//for (int i = 1; i <= n; i++) {
//	//	cout << big[i] << ' ';
//	//}
//	printf("%d", big[1]);
//	return 0;
//}