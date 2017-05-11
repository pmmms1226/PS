//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n, m;
//int visit[201];	vector <int> v[201];
//int A[201], B[201];
//bool dfs(int idx) {
//	visit[idx] = 1;
//	for (auto it : v[idx]) {
//		if (B[it] == 0) {
//			A[idx] = it;
//			B[it] = idx;
//			return true;
//		}
//		else {
//			if ( visit[B[it]] == 0 && dfs(B[it]) ) {
//				A[idx] = it;
//				B[it] = idx;
//				return true;
//			}
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
//		if (A[i] == 0) {
//			for (int j = 1; j <= n; j++) {
//				visit[j] = 0;
//			}
//			if (dfs(i)) ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}