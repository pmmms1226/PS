//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<cmath>
//#include<vector>
//#include<queue>
//#include<string>
//using namespace std;
//vector <pair<int, int>> v[1001];
//vector <int> ans;
//priority_queue <pair<int, int>> pq;
//#define INF 987654321
//int visit[1001], dist[1001], path[1001];
//void func(int idx) {
//	pq.push(make_pair(0, idx));
//	dist[idx] = 0;
//	while (!pq.empty()) {
//		int u = pq.top().second;
//		visit[u] = 1;
//		pq.pop();
//		for (auto it : v[u]) {
//			if (visit[it.first] == 0 && dist[it.first] > dist[u] + it.second) {
//				dist[it.first] = dist[u] + it.second;
//				path[it.first] = u;
//				pq.push(make_pair(-dist[it.first], it.first));
//			}
//		}
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int N, M;
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i < M; i++) {
//		int a, b, c;
//		scanf("%d %d %d", &a, &b, &c);
//		v[a].push_back(make_pair(b, c));
//	}
//	int S, E;
//	scanf("%d %d", &S, &E);
//	for (int i = 1; i <= N; i++) {
//		dist[i] = INF;
//	}
//	func(S);
//	printf("%d\n", dist[E]);
//	int tmp = E;
//	while (tmp != S) {
//		ans.push_back(tmp);
//		tmp = path[tmp];
//	}
//	ans.push_back(S);
//	int size = ans.size();
//	printf("%d\n", size);
//	for (int i = size-1; i >= 0; i--) {
//		printf("%d ", ans[i]);
//	}
//	
//	return 0 ;
//}