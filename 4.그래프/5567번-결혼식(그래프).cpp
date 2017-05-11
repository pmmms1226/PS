#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
vector <int> v[501];
int n, m;
int visit[501];
int ans = 0;
int main() {
	freopen("input.txt", "r", stdin);
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	queue <pair<int,int> > q;
	q.push(make_pair(1, 1));
	visit[1] = 1;
	ans = -1;
	while (!q.empty()) {
		int cur = q.front().first, cnt = q.front().second;
		q.pop();
	
		if (cnt == 4) {
			break;
		}
		ans++;
		for (auto it : v[cur]) {
			if (visit[it] == 0) {
				visit[it] = 1;
				q.push(make_pair(it, cnt + 1));
			}
		}
	}
	printf("%d", ans);
	return 0;
}