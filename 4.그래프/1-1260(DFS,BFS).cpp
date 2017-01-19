//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//
///*
//	인접행렬
//	시간: O(V^2)
//	공간: O(V^2)
//*/
//using namespace std;
//int G[1001][1001];
//int visit[1001];
//int V, E, S;
//queue <int> q;
//vector <int> v;
//void dfs(int idx) {
//	visit[idx] = 1;
//	v.push_back(idx);
//	for (int i = 1; i <= V; i++) {
//		if (G[idx][i] == 1) {
//			if (visit[i] == 0) dfs(i);
//		}
//	}
//}
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d %d", &V, &E, &S);
//	int a, b;
//	for (int i = 0; i < E; i++) {
//		scanf("%d %d", &a, &b);
//		G[a][b] = 1;
//		G[b][a] = 1;
//	}
//	dfs(S);
//	for (int i = 0; i < v.size(); i++) {
//		if (i == v.size() - 1) printf("%d\n", v[i]);
//		else printf("%d ", v[i]);
//	}
//	v.clear();
//	for (int i = 1; i <= V; i++) {
//		visit[i] = 0;
//	}
//	q.push(S);
//	visit[S] = 1;
//	int u;
//	while (!q.empty()) {
//		u = q.front();
//		q.pop();
//		v.push_back(u);
//		for (int i = 1; i <= V; i++) {
//			if (G[u][i] == 1) {
//				if (visit[i] == 0) {
//					q.push(i);
//					visit[i] = 1;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < v.size(); i++) {
//		if (i == v.size() - 1) printf("%d\n", v[i]);
//		else printf("%d ", v[i]);
//	}
//	
//	return 0;
//}