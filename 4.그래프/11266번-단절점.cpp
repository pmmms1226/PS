///*
//������ ã��.
//1.��� ���ϱ�
//2.low�� ���ϱ�(�� ������ ���� ������ �� �ִ� ���� ���� ������ ã�´�(���� ���� ��ȣ�� ã�´�)
//  �ڽ��� �ڽ��� �ڽź��� ���� low�� ������ ������ �� ������ �����Ѵ�.
//3.�ڽ��� low���� �θ��� �湮 ��ȣ�� ��. �ڽ��� low���� 
//  �۴ٸ� �θ� ���̵� �� ���� ������ �� �� �ִٴ� ������ �θ�� �������� �ƴϴ�.
//4.����: ��Ʈ�� �ڽ��� 2�� �̻��̸� ������ ������ �̴�.
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