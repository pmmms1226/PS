#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
#define INF 987654321
int h[101];
vector <int> v[101];
int ans;
int visit[101];
void dfs(int idx, int end, int cnt) {
	if (end == cnt) {
		if (ans > h[idx]) {
			ans = h[idx];
		}
		return;
	}
	for (auto it : v[idx]) {
		dfs(it, end, cnt + 1);
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &h[i]);
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		ans = INF;
		int s, k;
		scanf("%d %d", &s, &k);
		dfs(s, k, 0);
		if (ans == INF) printf("-1\n");
		else printf("%d\n", ans);
	}

	return 0;
}