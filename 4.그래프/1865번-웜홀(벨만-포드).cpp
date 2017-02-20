//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//using namespace std;
//
//#define INF 987654321
//vector <pair<int, int>> v[501];
//int dist[501];
//int N, M, W;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d %d %d", &N, &M, &W);
//		int a, b, c;
//		while (M--) {
//			scanf("%d %d %d", &a, &b, &c);
//			v[a].push_back(make_pair(b, c));
//			v[b].push_back(make_pair(a, c));
//		}
//		while (W--) {
//			scanf("%d %d %d", &a, &b, &c);
//			v[a].push_back(make_pair(b, -c));
//		}
//		for (int i = 1; i <= N; i++) {
//			dist[i] = INF;
//		}
//		bool can = false;
//		dist[1] = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 1; j <= N; j++) {
//				for (auto it : v[j]) {
//					if (dist[j] != INF && dist[it.first] > dist[j] + it.second) {
//						dist[it.first] = dist[j] + it.second;
//						if (i == N - 1) {
//							can = true;
//						}
//					}
//				}
//			}
//		}
//		if (can) printf("YES\n");
//		else printf("NO\n");
//		for (int i = 1; i <= N; i++) {
//			v[i].clear();
//		}
//	}
//	return 0;
//}