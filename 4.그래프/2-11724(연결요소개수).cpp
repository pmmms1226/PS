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
//	시간: o(V+E)
//	공간: o(V+E)
//*/
//using namespace std;
//
//vector <int> v[1001];
//int visit[1001];
//int V, E , cnt=0;
//void dfs(int idx) {
//	visit[idx] = 1;
//	for (auto it : v[idx]) {
//		if (visit[it] == 0) {
//			dfs(it);
//		}
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &V, &E);
//	int a, b;
//	for (int i = 0; i < E; i++) {
//		scanf("%d %d", &a, &b);
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	for (int i = 1; i <= V; i++) {
//		if (visit[i] == 0) {
//			dfs(i);
//			cnt++;
//		}
//	}
//	printf("%d\n", cnt);
//	return 0;
//}