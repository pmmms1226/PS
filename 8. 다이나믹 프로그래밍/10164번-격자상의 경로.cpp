//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//#include<string>
//using namespace std;
//int n, m;
//int arr[16][16];
//int check[226];
//int dp[16][16];
//int d[2][2] = { {1,0},{0,1} };
//int dfs(int x, int y) {
//	int &ret = dp[x][y];
//	if (ret != -1) return ret;
//	ret = 0;
//	for (int i = 0; i < 2; i++) {
//		int xx = x + d[i][0], yy = y + d[i][1];
//		if (xx >= n || yy >= m) continue;
//		ret += dfs(xx, yy);
//	}
//	return ret;
//}
//
//int main() {
//	freopen("input.txt", "r", stdin);
//	string s;
//	getline(cin, s);
//	int size = s.size();
//	for (int i = 0; i < size; i++) {
//		if (s[i] == ' ') continue;
//		if (i == 0) {
//			n = s[i]-'0';
//		}
//		else if (i == 2) {
//			m = s[i] - '0';
//		}
//		else {
//			check[s[i]-'0'] = 1;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			dp[i][j] = -1;
//		}
//	}
//	if (check[0] == 1) {
//		dp[n - 1][m - 1] = 1;
//		printf("%d", dfs(0, 0));
//		return 0;
//	}
//
//	
//	return 0;
//}