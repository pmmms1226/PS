//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//#include<queue>
//using namespace std;
//vector <pair<int, int>> v[10001];
//priority_queue <pair<int,int>> pq;
//int visit[10001] ,ans=0;
//void func(int idx) {
//	pq.push(make_pair(0, idx));
//	while (!pq.empty()) {
//		int cur = pq.top().second;
//		int w = -pq.top().first;
//		pq.pop();
//		if (visit[cur] == 1) continue;
//		visit[cur] = 1;
//		ans += w;
//		for (auto it : v[cur]) {
//			if (visit[it.first] == 0) {
//				pq.push(make_pair(-it.second, it.first));
//			}
//		}
//	}
//
//}
//int V, E;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &V, &E);
//	int a, b,c;
//	for (int i = 0; i < E; i++) {
//		scanf("%d %d %d", &a, &b , &c);
//		v[a].push_back(make_pair(b, c));
//		v[b].push_back(make_pair(a, c));
//	}
//	func(1);
//	printf("%d", ans);
//
//	return 0;
//}