//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<cstring>
//#include<queue>
//#include<vector>
//using namespace std;
//struct A { int rx, ry, bx, by, cnt; };
//int arr[11][11];
//int visit[11][11][11][11];
//int d[4][2] = { { 0,1 } ,{ 1,0 } ,{ 0,-1 },{ -1,0 } };
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n, m, x, y, xx, yy;
//	scanf("%d %d", &n, &m);
//	char s[11];
//	for (int i = 0; i < n; i++) {
//		scanf("%s", s);
//		for (int j = 0; j < m; j++) {
//			arr[i][j] = s[j];
//			if (arr[i][j] == 'R') {
//				x = i, y = j;
//				arr[i][j] = '.';
//			}
//			else if (arr[i][j] == 'B') {
//				xx = i, yy = j;
//				arr[i][j] = '.';
//			}
//		}
//	}
//
//	queue <A> q;
//	q.push({ x,y,xx,yy , 0 });
//	bool Rend = false, Bend = false; int ans = 0;
//	while (!q.empty()) {
//		A tmp = q.front();
//		q.pop();
//		visit[tmp.rx][tmp.ry][tmp.bx][tmp.by] = 1;
//		for (int i = 0; i < 4; i++) {
//			int rxx = tmp.rx + d[i][0], ryy = tmp.ry + d[i][1], bxx = tmp.bx + d[i][0], byy = tmp.by + d[i][1];
//			if (arr[rxx][ryy] == '#' && arr[bxx][byy] == '#') continue;
//			//B
//			while (arr[bxx][byy] == '.') {
//				bxx += d[i][0], byy += d[i][1];
//			}
//			//R
//			while (arr[rxx][ryy] == '.') {
//				rxx += d[i][0], ryy += d[i][1];
//			}
//			if (arr[bxx][byy] == 'O') continue;
//			if (arr[rxx][ryy] == 'O') {
//				Rend = true;
//				ans = tmp.cnt + 1;
//				break;
//			}
//			bxx -= d[i][0], byy -= d[i][1], rxx -= d[i][0], ryy -= d[i][1];
//			if (bxx == rxx && byy == ryy) {
//				switch (i) {
//				case 0:
//					if (tmp.ry > tmp.by) byy -= d[i][1];
//					else ryy -= d[i][1];
//					break;
//				case 1:
//					if (tmp.rx > tmp.bx) bxx -= d[i][0];
//					else rxx -= d[i][0];
//					break;
//				case 2:
//					if (tmp.ry > tmp.by) ryy -= d[i][1];
//					else byy -= d[i][1];
//					break;
//				case 3:
//					if (tmp.rx > tmp.bx) rxx -= d[i][0];
//					else bxx -= d[i][0];
//					break;
//				}
//			}
//			if (visit[rxx][ryy][bxx][byy] == 1) continue;
//			q.push({ rxx,ryy,bxx,byy,tmp.cnt + 1 });
//		}
//		if (Rend) break;
//	}
//	if (ans == 0) printf("%d", -1);
//	else if (ans > 10) printf("%d", -1);
//	else
//		printf("%d", ans);
//	return 0;
//}