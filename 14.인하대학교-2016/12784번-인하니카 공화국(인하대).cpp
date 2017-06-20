#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
vector <pair<int, int> > v[1001];
int visit[1001];
#define INF 987654321
int dfs(int idx , int cnt) {
	visit[idx] = 1;
	if (idx != 1 && v[idx].size() == 1) return cnt;
	int sum = 0;
	for (auto it : v[idx]) {
		if(visit[it.first] == 0)
			sum += dfs(it.first, it.second);
	}
	return min(sum, cnt);
}
int main() {
	freopen("input.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < m; i++) {
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			v[a].push_back(make_pair(b, c));
			v[b].push_back(make_pair(a, c));
		}
		printf("%d\n",dfs(1, INF));
		for (int i = 1; i <= n; i++) {
			visit[i] = 0;
			v[i].clear();
		}
	}

	return 0;
}