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
//#include<stack>
//
//using namespace std;
//
//vector <pair<int, int>> v[100001];
//struct A {
//	int dist, last;
//};
//int sum = 0, last;
//int N, visit[100001];
//A dfs(int idx ) {
//	visit[idx] = 1;
//	int max = 0 ,a = 0;
//	A temp;
//	for (auto it : v[idx]) {
//		if (visit[it.first] == 0) {
//			temp = dfs(it.first);
//			sum =it.second+temp.dist;
//			if (max < sum) {
//				max = sum;
//				a = temp.last;
//			}
//		}
//	}
//	temp.dist = max;
//	temp.last = a;
//	if (max == 0) temp.last = idx;
//	return temp;
//
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	int a, b, c;
//	for (int i = 0; i < N; i++) {
//		scanf("%d %d %d", &a, &b, &c);
//		v[a].push_back(make_pair(b, c));
//		v[b].push_back(make_pair(a, c));
//	}
//	A ans = dfs(1);
//	for (int i = 0; i <= N; i++) {
//		visit[i] = 0;
//	}
//	printf("%d\n", max(ans.dist, dfs(ans.last).dist));
//	return 0;
//}