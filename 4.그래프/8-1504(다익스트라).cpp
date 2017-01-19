//#include<iostream>
//#include<algorithm>
//#include<stdio.h>
//#include<vector>
//#include<queue>
///*
//인접리스트
//다익스트라
//시간: o(V^2)
//공간: o(V+E)
//*/
//using namespace std;
//#define INF 100000000
//int V, E;
//vector <pair<int, int>> v[801];
//priority_queue <pair<int, int> > pq;
//int dist[801] , visit[801];
//void DS(int idx) {
//	for (int i = 1; i <= V; i++) {
//		dist[i] = INF;
//		visit[i] = 0;
//	}
//	dist[idx] = 0;
//	pq.push(make_pair(0, idx));
//	int u;
//	while (!pq.empty()) {
//		u = pq.top().second;
//		visit[u] = 1;
//		pq.pop();
//		for (auto it : v[u]) {
//			if (visit[it.first] == 0) {
//				if (dist[it.first] > dist[u] + it.second) {
//					dist[it.first] = dist[u] + it.second;
//					pq.push(make_pair(-dist[it.first], it.first));
//				}
//			}
//		}
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &V, &E);
//	int a, b , c;
//	for (int i = 0; i < E; i++) {
//		scanf("%d %d %d", &a, &b, &c);
//		v[a].push_back(make_pair(b, c));
//		v[b].push_back(make_pair(a, c));
//	}
//	int s_a, s_b, a_b, b_V, a_V;
//	scanf("%d %d", &a, &b);
//	DS(1);
//	s_a = dist[a]; s_b = dist[b];
//	DS(a);
//	a_b = dist[b];
//	a_V = dist[V];
//	DS(b);
//	b_V = dist[V];
//	int ans = min(s_a + a_b + b_V, s_b + a_b + a_V);
//	if (ans >= INF) printf("-1\n");
//	else printf("%d\n", ans);
//	
//	return 0;
//}