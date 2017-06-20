#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
long long dp[201][201];
int d[2][2] = { {1,0} , {0,1} };
int tx, ty;
#define mod 1000007
long long dfs(int x, int y , int endx , int endy) {
	if (x == endx && y == endy) {
		return 1;
	}
	long long &ret = dp[x][y];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < 2; i++) {
		int xx = x + d[i][0], yy = y + d[i][1];
		if (xx > endx || yy > endy) continue;
		ret += (dfs(xx, yy, endx, endy) % mod);
	}
	return ret%mod;
}
int main() {
	freopen("input.txt", "r", stdin);
	int n, m;
	scanf("%d %d", &n, &m);
	scanf("%d %d", &tx, &ty);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = -1;
		}
	}
	printf("%lld", ((dfs(1, 1, tx, ty)%mod) * (dfs(tx, ty, n, m)%mod))%mod);
	
	return 0;
}