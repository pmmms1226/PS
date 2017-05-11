//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//using namespace std;
//int n, m, arr[100001];
//int dp[100001];
//int dp2[100001];
//int main() {
//	freopen("input.txt", "r", stdin);
//	while (1) {
//		scanf("%d %d", &n, &m);
//		if (n == 0 && m == 0) return 0;
//		for (int i = 0; i < n*m; i++) {
//			scanf("%d", &arr[i]);
//		}
//		vector <int> v;
//		for (int i = 0; i < n*m; i++) {
//			if (i % m == 0) dp[i] = arr[i];
//			else {
//				if (i % m - 2 < 0) dp[i] = max(arr[i], dp[i - 1]);
//				else dp[i] = max(arr[i] + dp[i - 2], dp[i - 1]);
//			}
//			if (i % m == m - 1) v.push_back(dp[i]);
//		}
//	/*	for (int i = 0; i < n*m; i++) {
//			cout << dp[i] << ' ';
//		}
//		cout << endl;*/
//		int size = v.size();
//		for (int i = 0; i < size; i++) {
//			if (i - 2 < 0) dp2[i] = max(v[i], dp2[i - 1]);
//			else dp2[i] = max(v[i] + dp2[i - 2], dp2[i - 1]);
//		}
//		printf("%d\n", dp2[size - 1]);
//	}
//
//
//	return 0;
//}