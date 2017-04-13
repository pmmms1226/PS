//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//bool dp[1001];
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	dp[2] = true, dp[4] = true;
//	if (n <= 4) {
//		if (dp[n]) printf("SK");
//		else printf("CY");
//		return 0;
//	}
//	for (int i = 5; i <= n; i++) {
//		if (!dp[i - 4]) { dp[i] = true; continue; }
//		if (!dp[i - 3]) { dp[i] = true; continue; }
//		if (!dp[i - 1]) { dp[i] = true; continue; }
//	}
//	if (dp[n]) printf("SK");
//	else printf("CY");
//
//	return 0;
//}