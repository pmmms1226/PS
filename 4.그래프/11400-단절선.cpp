///*
//������ ã��.
//1.��� ���ϱ�
//2.low�� ���ϱ�(�� ������ ���� ������ �� �ִ� ���� ���� ������ ã�´�(���� ���� ��ȣ�� ã�´�)
//�ڽ��� �ڽ��� �ڽź��� ���� low�� ������ ������ �� ������ �����Ѵ�.
//3.�ڽ��� low���� �θ��� �湮 ��ȣ�� ��. �ڽ��� low����
//�۴ٸ� �θ� ���̵� �� ���� ������ �� �� �ִٴ� ������ �θ�� �������� �ƴϴ�.
//4.����: ��Ʈ�� �ڽ��� 2�� �̻��̸� ������ ������ �̴�.
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