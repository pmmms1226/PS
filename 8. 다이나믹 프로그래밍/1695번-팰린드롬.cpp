//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int arr[5001];
//int dp[5001][5001];
//int func(int x, int y) {
//	if (x > y) return 0;
//	if (dp[x][y]) return dp[x][y];
//	if (arr[x] == arr[y]) return dp[x][y] =  func(x + 1, y - 1);
//	return dp[x][y] =  1 + min(func(x + 1, y), func(x, y - 1));
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	printf("%d", func(0, n - 1));
//	return 0;
//}