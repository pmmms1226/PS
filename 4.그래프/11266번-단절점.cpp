///*
//단절점 찾기.
//1.경로 구하기
//2.low값 구하기(백 간선을 통해 도달할 수 있는 가장 높은 선조를 찾는다(가장 낮은 번호를 찾는다)
//  자신의 자식이 자신보다 작은 low를 가지고 있으면 그 값으로 갱신한다.
//3.자신의 low값과 부모의 방문 번호를 비교. 자신의 low값이 
//  작다면 부모 없이도 더 높은 선조로 갈 수 있다는 뜻으로 부모는 단절점이 아니다.
//4.예외: 루트는 자식이 2개 이상이면 무조건 단절점 이다.
//*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//vector <int> v[10001];
//int visit[10001], path[10001], low[10001], ans[10001], cutvSize;
//int cnt = 1, V, E , root;
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
//	if (root == idx) {
//		if (child >= 2) {
//			if (!ans[idx]) {
//				ans[idx] = 1;
//				cutvSize++;
//			}
//		}
//	}
//	else {
//		if (parent != root && low[idx] >= path[parent]) {
//			if (!ans[parent]) {
//				ans[parent] = 1;
//				cutvSize++;
//			}
//		}
//	}
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
//	printf("%d\n", cutvSize);
//	for (int i = 1; i <= V; i++) {
//		if (ans[i])
//			printf("%d ", i);
//	}
//	return 0;
//}