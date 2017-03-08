//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
//#include<string>
//using namespace std;
//int n, m;
//char map[21][21];
//bool al[26];
//int d[4][2] = { {1,0} , {0,1} ,{-1,0} , {0,-1} };
//
//int dfs(int x, int y) {
//	int ret = 0 , MAX= 0;
//	//if (x < 0 || y < 0 || x >= n || y >= m) return;
//	for (int i = 0; i < 4; i++) {
//		int xx = x + d[i][0], yy = y + d[i][1];
//		if (xx < 0 || yy < 0 || xx >= n || yy >= m)continue;
//		if (!al[map[xx][yy] - 'A']) {
//			al[map[xx][yy] - 'A'] = true;
//			ret = dfs(xx, yy);
//			if (MAX < ret) MAX = ret;
//			al[map[xx][yy] - 'A'] = false;
//		}
//	}
//	return MAX+1;
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
//	al[map[0][0] - 'A'] = true;
//	printf("%d", dfs(0, 0));
//	return 0;
//}