#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
vector <int> v[10001];
int T[10001], cnt[10001] , dp[10001];
void dfs(int idx) {
	if (cnt[idx]) return;
	cnt[idx] = -1;
	for (auto it : v[idx]) {
		T[it] = max(T[it], dp[it] + T[idx]);
		cnt[it]--;
		dfs(it);
	}
}
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	int N;
	scanf("%d", &N);
	int time, num;
	for (int i = 1; i <= N; i++) {
		scanf("%d %d", &time, &num);
		dp[i] = time;
		while (num--) {
			int a;
			scanf("%d", &a);
			v[a].push_back(i);
			cnt[i]++;
		}
	}
	for (int i = 1; i <= N; i++) {
		if (cnt[i] != -1) {
			T[i] = dp[i];
			dfs(i);
		}
	}
	int max = 0;
	for (int i = 1; i <= N; i++) {
		if (max < T[i]) max = T[i];
	}
	printf("%d", max);
	return 0;
}