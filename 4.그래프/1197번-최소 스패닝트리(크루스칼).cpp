//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//#include<queue>
//using namespace std;
//struct A {
//	int s, e, w;
//}g[100001];
//int set[100001];
//int find(int idx) {
//	if (set[idx] == idx) return idx;
//	return set[idx] = find(set[idx]);
//}
//int V, E;
//bool compare(const A &a, const A &b) {
//	return a.w < b.w;
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &V, &E);
//	int a, b, c;
//	for (int i = 0; i < E; i++) {
//		scanf("%d %d %d", &a, &b, &c);
//		g[i].s = a; g[i].e = b; g[i].w = c;
//	}
//	sort(g, g + E, compare);
//	for (int i = 0; i <= V; i++) {
//		set[i] = i;
//	}
//	int ans = 0;
//	for (int i = 0; i < E; i++) {
//		int a, b;
//		a = find(g[i].s);
//		b = find(g[i].e);
//		if (a == b) continue;
//		else {
//			ans += g[i].w;
//			set[b] = a;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}