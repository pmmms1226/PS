//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int dp[101][101], arr[101];
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			dp[i][j] = -987654321;
//		}
//	}
//	dp[1][1] = arr[1];
//	for (int j = 1; j <= m; j++) {
//		for (int i = 2; i <= n; i++) {
//			int end = 0;
//			if (i % 2 == 0) end = i / 2;
//			else end = i / 2 + 1;
//			if (end < j) continue;
//			if (j == 1) {
//				int sum=0;
//				dp[i][j] = dp[i - 1][j];
//				for (int k = i; k > 0; k--) {
//					sum += arr[k];
//					if (dp[i][j] < sum) dp[i][j]=sum;
//				}
//			}
//			else {
//				int sum = 0;
//				dp[i][j] = dp[i - 1][j];
//				for (int k = i; k > 0; k--) {
//					sum += arr[k];
//					int tmp;
//					if (k - 2 <= 0) break;
//					tmp = dp[k - 2][j - 1] + sum;
//					if (dp[i][j] < tmp) dp[i][j] =tmp;
//				}
//			}
//		}
//	}
//	/*for (int j = 1; j <= 2; j++) {
//		for (int i = 1; i <= n; i++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}*/
//	printf("%d", dp[n][m]);
//	
//		
//	return 0;
//}