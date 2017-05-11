//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//#include<queue>
//using namespace std;
//struct A {
//	int x, y, xx, yy, xxx, yyy;
//};
//int n, m , cnt_0 , cnt_1 , cnt_2;
//int arr[10][10];
//int d[4][2] = { {0,1} , {1,0} , {-1,0} , {0,-1} };
//int ret = 0;
//vector <pair<int,int> > v;
//int check(A xy) {
//	int cnt = 0;
//	int tmp[10][10];
//	int visit[10][10];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			tmp[i][j] = arr[i][j];
//			visit[i][j] = 0;
//		}
//	}
//	tmp[xy.x][xy.y] = 1, tmp[xy.xx][xy.yy] = 1, tmp[xy.xxx][xy.yyy] = 1;
//	queue <pair<int, int> > q;
//	int size = v.size();
//	for (int i = 0; i < size; i++) {
//		int x = v[i].first, y = v[i].second;
//		q.push(make_pair(x, y));
//	}
//	while (!q.empty()) {
//		int x = q.front().first, y = q.front().second;
//		q.pop();
//		if (visit[x][y] == 1) continue;
//		visit[x][y] = 1;
//		for (int i = 0; i < 4; i++) {
//			int xx = x + d[i][0], yy = y + d[i][1];
//			if (xx < 0 || yy < 0 || xx >= n || yy >= m) continue;
//			if (visit[xx][yy] == 0) {
//				if (tmp[xx][yy] == 0) {
//					tmp[xx][yy] = 2;
//					cnt++;
//					q.push(make_pair(xx, yy));
//				}
//			}
//		}
//	}
//	return cnt_0 - 3 - cnt;
//}
//void dfs(int x, int y , int cnt , A xy) {
//	if (cnt == 2) {
//		xy.xx = x, xy.yy = y;
//	}
//	else if (cnt == 3) {
//		xy.xxx = x, xy.yyy = y;
//		int tmp = check(xy);
//		if (ret < tmp) {
//			ret = tmp;
//			/*cout << xy.x << ' ' << xy.y << endl;
//			cout << xy.xx << ' ' << xy.yy << endl;
//			cout << xy.xxx << ' ' << xy.yyy << endl;*/
//		}
//		return;
//	}
//	for (int i = y + 1; i < m; i++) {
//		if(arr[x][i] == 0)
//			dfs(x, i, cnt + 1, xy);
//	}
//	for (int i = x+1; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if(arr[i][j] == 0)
//				dfs(i, j, cnt + 1, xy);
//		}
//	}
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &arr[i][j]);
//			switch (arr[i][j]) {
//			case 0: 
//				cnt_0++;
//				break;
//			case 1:
//				cnt_1++;
//				break;
//			case 2:
//				v.push_back(make_pair(i, j));
//				cnt_2++;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] == 0) {
//				A xy; xy.x = i, xy.y = j;
//				dfs(i, j, 1, xy);
//			}
//		}
//	}
//	printf("%d", ret);
//	return 0;
//}