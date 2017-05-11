//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//vector <int> v[1001];
//int n, m;
//int A[1001], B[1001] , visit[1001];
//bool dfs(int idx) {
//	visit[idx] = 1;
//	for (auto it : v[idx]) {
//		if (visit[B[it]] == 1) continue;
//		if (B[it] == 0||  dfs(B[it])) {
//			A[idx] = it;
//			B[it] = idx;
//			return true;
//		}
//	}
//	return false;
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		int cnt;
//		scanf("%d", &cnt);
//		while (cnt--) {
//			int a;
//			scanf("%d", &a);
//			v[i].push_back(a);
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			visit[j] = 0;
//		}
//		if (A[i] == 0) {
//			if (dfs(i)) ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}