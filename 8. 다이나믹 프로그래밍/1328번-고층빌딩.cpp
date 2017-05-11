#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define mod 1000000007
int n, l, r;
long long dp[101][101][101];
long long sol(int n, int l, int r) {
	if (l == n && r == 1 || l == 1 && r == n) return 1;
	if (l == 0 || r == 0|| n== 0) return 0;
	long long &ret = dp[n][l][r];
	if (ret != -1) return ret;
	ret = ((sol(n - 1, l, r)*(n - 2) + sol(n - 1, l - 1, r) + sol(n - 1, l, r - 1))) % mod;
	return ret;
}
int main() {
	freopen("input.txt", "r", stdin);
	scanf("%d %d %d", &n, &l, &r);
	memset(dp, -1, sizeof(dp));
	printf("%lld", sol(n,l,r) % mod);
	return 0;
}