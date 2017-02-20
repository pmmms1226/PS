//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//#include<queue>
//using namespace std;
//vector <pair<int, int>> v[501];
//int N, M ;
//#define INF 98765321
//int dist[501], visit[501];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &M);
//	int a, b, c;
//	for (int i = 0; i < M; i++) {
//		scanf("%d %d %d", &a, &b, &c);
//		v[a].push_back(make_pair(b, c));
//	}
//	for (int i = 1; i <= N; i++) {
//		dist[i] = INF;
//	}
//	dist[1] = 0;
//	bool minus = false;
//	for (int i = 0; i < N; i++) {
//		for (int j = 1; j <= N; j++) {
//			for (auto it : v[j]) {
//				if (dist[j] != INF && dist[it.first] > dist[j] + it.second) {
//					dist[it.first] = dist[j] + it.second;
//					if (i == N - 1) minus = true;
//				}
//			}
//		}
//	}
//	if (minus) printf("%d", -1);
//	else {
//		for (int i = 2; i <= N; i++) {
//			if (dist[i] == INF) printf("%d\n", -1);
//			else printf("%d\n", dist[i]);
//		}
//	}
//	return 0;
//}