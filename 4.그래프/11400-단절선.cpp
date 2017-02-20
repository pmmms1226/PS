///*
//단절점 찾기.
//1.경로 구하기
//2.low값 구하기(백 간선을 통해 도달할 수 있는 가장 높은 선조를 찾는다(가장 낮은 번호를 찾는다)
//자신의 자식이 자신보다 작은 low를 가지고 있으면 그 값으로 갱신한다.
//3.자신의 low값과 부모의 방문 번호를 비교. 자신의 low값이
//작다면 부모 없이도 더 높은 선조로 갈 수 있다는 뜻으로 부모는 단절점이 아니다.
//4.예외: 루트는 자식이 2개 이상이면 무조건 단절점 이다.
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//vector <int> v[100001];
//vector <pair<int, int>> ans;
//int visit[100001], path[100001], low[100001];
//int cnt = 1, V, E, root;
//void dfs(int idx, int parent) {
//	path[idx] = cnt;
//	low[idx] = cnt;
//	visit[idx] = 1;
//	cnt++;
//	int child = 0;
//	for (auto it : v[idx]) {
//		if (it == parent) {
//			continue;
//		}
//		else if (visit[it] == 0) {
//			child++;
//			dfs(it, idx);
//		}
//		if (low[idx] > low[it]) low[idx] = low[it];
//	}
//	if (parent != 0 && low[idx] > path[parent]) {
//		if (idx > parent) ans.push_back(make_pair(parent, idx));
//		else ans.push_back(make_pair(idx, parent));
//	}
//
//
//
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &V, &E);
//	for (int i = 0; i < E; i++) {
//		int a, b;
//		scanf("%d %d", &a, &b);
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	for (int i = 1; i <= V; i++) {
//		if (visit[i] == 0) {
//			root = i;
//			dfs(i, 0);
//		}
//	}
//	sort(ans.begin(), ans.end());
//	printf("%d\n", ans.size());
//	for (auto it : ans) {
//		printf("%d %d\n", it.first, it.second);
//	}
//	
//
//	return 0;
//}