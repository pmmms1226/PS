//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//using namespace std;
//int N, M;
//vector <int> v[32001] ;
//int cnt[32001];
//void dfs(int idx) {
//	if (cnt[idx]) return;
//	cnt[idx] = -1;
//	printf("%d ", idx);
//	for (auto it : v[idx]) {
//		--cnt[it];
//		dfs(it);
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &M);
//	int a, b;
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d", &a, &b);
//		v[a].push_back(b);
//		cnt[b]++;
//	}
//	for (int i = 1; i <= N; i++) {
//		if (cnt[i] != -1) dfs(i);
//	}
//	return 0;
//}