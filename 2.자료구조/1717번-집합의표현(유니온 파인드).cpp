//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int N, M;
//int set[1000001];
//int Size[1000001];
//int find(int a) {
//	if (set[a] == a) return a;
//	return set[a] = find(set[a]);
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &M);
//	for (int i = 0; i <= N; i++) {
//		set[i] = i;
//		Size[i] = 1;
//	}
//	int a, b, c;
//	while (M--) {
//		scanf("%d %d %d", &a, &b, &c);
//		int x = find(b), y = find(c);
//		if (a == 0) {
//			set[y] = x;
//		}
//		else {
//			if (x == y) printf("YES\n");
//			else printf("NO\n");
//		}
//	}
//	return 0;
//}