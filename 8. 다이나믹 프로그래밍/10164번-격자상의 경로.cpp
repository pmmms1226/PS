#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<string>
using namespace std;
int n, m , k;
int arr[16][16];
int check[226];
int dp[16][16];
int d[2][2] = { { 1,0 },{ 0,1 } };
vector <int> v;
int dfs(int start, int target) {
	int x = (start-1) / m , y = (start-1) % m;
	int endx = (target - 1) / m, endy = (target - 1) % m;
	if (arr[x][y] == target) {
		return 1;
	}
	int &ret = dp[x][y];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < 2; i++) {
		int xx = x + d[i][0], yy = y + d[i][1];
		if (xx > endx || yy > endy  ) continue;
		ret += dfs(arr[xx][yy], target);
	}
	return ret;
}
int main() {
	//freopen("input.txt", "r", stdin);
	scanf("%d %d %d", &n, &m, &k);
	int idx = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dp[i][j] = -1;
			arr[i][j] = idx;
			idx++;
		}
	}
	int ans ;
	if (k == 0) {
		ans = dfs(1, n*m);
	}
	else {
		ans = dfs(1, k) * dfs(k, n*m);
	}
	
	printf("%d", ans);
	/*dfs(1, 8);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}*/

	return 0;
}
