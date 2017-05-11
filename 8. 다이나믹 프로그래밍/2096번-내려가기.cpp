//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int arr[3];
//int dp[3];
//int dp2[3];
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	int tmp1, tmp2, tmp3 , tmp4 ,tmp5 , tmp6;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &arr[j]);
//			if (i == 0) {
//				dp[j] = arr[j];
//				dp2[j] = arr[j];
//			}
//			else {
//				switch (j) {
//				case 0:
//					tmp1 = arr[j] + max(dp[0], dp[1]);
//					tmp4 = arr[j] + min(dp2[0], dp2[1]);
//					break;
//				case 1:
//					tmp2 = arr[j] + max(tmp1 - arr[0], dp[2]);
//					tmp5 = arr[j] + min(tmp4 - arr[0], dp2[2]);
//					break;
//				case 2:
//					tmp3 = arr[j] + max(dp[1], dp[2]);
//					tmp6 = arr[j] + min(dp2[1], dp2[2]);
//					break;
//				}
//			}
//		}
//		if (i != 0) {
//			dp[0] = tmp1, dp[1] = tmp2, dp[2] = tmp3;
//			dp2[0] = tmp4, dp2[1] = tmp5, dp2[2] = tmp6;
//		}
//	}
//	if (n == 1) {
//		printf("%d ", max(dp[0], max(dp[1], dp[2])));
//		printf("%d", min(dp2[0], min(dp2[1], dp2[2])));
//	}
//	else {
//		printf("%d ", max(tmp1, max(tmp2, tmp3)));
//		printf("%d", min(tmp4, min(tmp5, tmp6)));
//	}
//	return 0;
//}