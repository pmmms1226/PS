//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//
///*
//인접리스트
//시간: o(V+E)
//공간: o(V+E)
//*/
//using namespace std;
//
//vector <int> v[1001];
//int visit[1001];
//bool isC = false;
//void dfs(int idx) {
//	visit[idx] = 1;
//	for (auto it : v[idx]) {
//		if (visit[it] == 1) {
//			isC = true;
//			return ;
//		}
//		else dfs(it);
//	}
//}
//int cnt;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int V;
//		scanf("%d", &V);
//		cnt = 0;
//		isC = false;
//		for (int i = 1; i <= V; i++) {
//			visit[i] = 0;
//			v[i].clear();
//		}
//		int a;
//		for (int i = 1; i <= V; i++) {
//			scanf("%d", &a);
//			v[i].push_back(a);
//		}
//		for (int i = 1; i <= V; i++) {
//			if (visit[i] == 0 && v[i][0] == i) {
//				cnt++;
//				continue;
//			}
//			if (visit[i] == 0) {
//				dfs(i);
//				if (isC) cnt++;
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	
//	return 0;
//}