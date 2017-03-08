//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
//#include<string>
//using namespace std;
//int n, m;
//char map[21][21];
//int visit[21][21];
//int d[4][2] = { {1,0} , {0,1} ,{-1,0} , {0,-1} };
//int ans[21][21];
//int MAX;
//void dfs(int x, int y , string s) {
//	if (x < 0 || y < 0 || x >= n || y >= m) return;
//	for (int i = 0; i < 4; i++) {
//		int xx = x + d[i][0], yy = y + d[i][1];
//		if (xx < 0 || yy < 0 || xx >= n || yy >= m) continue;
//		bool go = true;
//		int size = s.size();
//		for (int i = 0; i < size; i++) {
//			if (map[xx][yy] == s[i]) {
//				go = false;
//				break;
//			}
//		}
//		if (go) {
//			dfs(xx, yy, s+map[xx][yy]);
//		}
//	}
//	//cout << "x: " << x << " y: " << y << "   " << s<<endl;
//	ans[x][y] = max(ans[x][y], (int)s.size());
//	if (MAX < ans[x][y]) MAX = ans[x][y];
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &n, &m);
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		for (int j = 0; j < m; j++) {
//			map[i][j] = s[j];
//		}
//	}
//	string ss;
//	ss = map[0][0];
//	dfs(0, 0,ss);
//	printf("%d", MAX);
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < m; j++) {
//	//		cout << ans[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//	return 0;
//}