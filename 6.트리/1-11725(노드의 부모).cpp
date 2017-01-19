///*
//인접 리스트
//시간: O(V+E)
//공간: O(V+E)
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdio>
//#include<queue>
//
//using namespace std;
//
//vector <int> v[100001];
//queue <int> q;
//int N, visit[100001] , result[100001];
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	int a, b;
//	for (int i = 0; i < N; i++) {
//		scanf("%d %d", &a, &b);
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	q.push(1);
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		visit[u] = 1;
//		for (auto it : v[u]) {
//			if (visit[it] == 0) {
//				q.push(it);
//				result[it] = u;
//			}
//		}
//	}
//	for (int i = 2; i <= N; i++) {
//		printf("%d\n", result[i]);
//	}
//	return 0;
//}