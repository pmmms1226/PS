//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<queue>
//#include<cmath>
//using namespace std;
//class A {
//public:
//	int x, y, d;
//	A() {}
//	A(int xx, int yy, int dd) {
//		x = xx, y = yy, d = dd;
//	}
//};
//int n, m;
//int arr[101][101];
//int dd[5][2] = { {0,0} ,{0,1},{0,-1},{1,0} , {-1,0} };
//int visit[101][101][4];
//
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d %d", &n, &m);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			scanf("%d", &arr[i]);
//		}
//	}
//	int sx, sy, sd, ex, ey, ed;
//	scanf("%d %d %d %d %d %d", &sx, &sy, &sd, &ex, &ey, &ed);
//	queue <pair< A , int> > q;
//	q.push(make_pair(A(sx, sy, sd), 0));
//	bool end = false;
//	int ans = 0;
//	while (!q.empty()) {
//		A tmp = q.front().first;
//		int x = tmp.x, y = tmp.y, d = tmp.d;
//		int cnt = q.front().second;
//		q.pop();
//		for (int i = 1; i <= 4; i++) {
//			int cnttmp = cnt;
//			for (int j = 1; j <= 3; j++) {
//				int dif = abs(d - i);
//				if (dif == 3) dif = 1;
//				cnttmp += dif;
//				if (x == ex && y == ey && i == ed) {
//					end = true;
//					ans = cnttmp;
//					break;
//				}
//				int xx = x + dd[i][0] * j, yy = y + dd[i][1]*j;
//				if (xx < 1 || yy< 1 || xx>n || yy> m) continue;
//				if (arr[xx][yy] == 1) continue;
//				if (visit[xx][yy][i] == 0) {
//					q.push(make_pair(A(xx, yy, i), cnttmp+1));
//					visit[xx][yy][i] = 1;
//				}
//			}
//			if (end) break;
//		}
//		if (end) break;
//	}
//	printf("%d", ans);
//	return 0;
//}