//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int dp[101][101] , arr[101]  ;
//bool visit[101][101];
//int sol(int x, int y) {
//	if (y == 0) return 0;
//	if (x <= 0) return -98765432;
//	if (visit[x][y]) return dp[x][y];
//	visit[x][y] = true;
//	int &ret = dp[x][y];
//	ret = sol(x - 1, y);
//	int tmp , sum = 0;
//	for (int i = x; i > 0; i--) {
//		sum += arr[i];
//	    tmp = sol(i - 2, y - 1) + sum;
//		if (ret < tmp) ret = tmp;
//	}
//	return ret;
//}
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
//		for (int j = 1; j <= n; j++) {
//			dp[i][j] = -1;
//		}
//	}
//	
//	printf("%d", sol(n, m));
//	return 0;
//}