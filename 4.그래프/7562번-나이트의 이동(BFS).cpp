//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<queue>
//using namespace std;
//int visit[301][301];
//int d[8][2] = { {-2,-1},{-1,-2},{-2,1},{-1,2},{1,-2},{2,-1},{1,2},{2,1} };
//int main() {
//	freopen("input.txt", "r", stdin);
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int sX, sY, eX, eY, n;
//		scanf("%d %d %d %d %d", &n, &sX, &sY, &eX, &eY);
//		queue <pair<pair<int, int>, int> > q;
//		q.push(make_pair(make_pair(sX, sY), 0));
//		int ans = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				visit[i][j] = 0;
//			}
//		}
//		visit[sX][sY] = 1;
//		while (!q.empty()) {
//			int x = q.front().first.first, y = q.front().first.second, cur = q.front().second;
//			q.pop();
//			if (x == eX && y == eY) {
//				ans = cur;
//				break;
//			}
//			for (int i = 0; i < 8; i++) {
//				int xx = x + d[i][0], yy = y + d[i][1];
//				if (xx < 0 || yy < 0 || xx >= n || yy >= n) continue;
//				if (visit[xx][yy] == 1) continue;
//				q.push(make_pair(make_pair(xx, yy), cur + 1));
//				visit[xx][yy] = 1;
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}