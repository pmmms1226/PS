//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//
///*
//인접행렬
//시간: o(V+E)
//공간: o(V+E)
//*/
//using namespace std;
//
//int V, E, visit[20001];
//vector <int> v[20001];
//queue <int> q;
//bool isB;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d %d", &V, &E);
//		isB = true;
//		for (int i = 1; i <= V; i++) {
//			v[i].clear();
//			visit[i] = 0;
//		}
//		while (!q.empty()) {
//			q.pop();
//		}
//		int a, b;
//		for (int i = 0; i < E; i++) {
//			scanf("%d %d", &a, &b);
//			v[a].push_back(b);
//			v[b].push_back(a);
//		}
//		int u;
//		for (int i = 1; i <= V; i++) {
//			if (visit[i] == 0) {
//				q.push(i);
//				visit[i] = 1;
//				while (!q.empty()) {
//					u = q.front();
//					q.pop();
//					for (auto it : v[u]) {
//						if (visit[it] == 0) {
//							q.push(it);
//							visit[it] = visit[u] + 1;
//						}
//						else {
//							if ((visit[u] + 1) % 2 != visit[it] % 2) {
//								isB = false;
//								break;
//							}
//						}
//						if (isB == false) break;
//					}
//					if (isB == false) break;
//				}
//			}
//			if (isB == false) break;
//		}
//		if (isB) printf("YES\n");
//		else printf("NO\n");
//	}
//	return 0;
//}