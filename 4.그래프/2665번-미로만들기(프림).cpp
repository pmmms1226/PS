//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//#include<queue>
//using namespace std;
//int N;
//int map[51][51];
//int dp[51][51];
//int d[4][2] = { {1,0} , {0,1} , {-1,0} , {0 , -1} };
//priority_queue <pair<int, pair<int,int> >> q;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	string s;
//	for (int i = 1; i <= N; i++) {
//		cin >> s;
//		for (int j = 1; j <= N; j++) {
//			map[i][j] = s[j-1]-'0';
//			dp[i][j] = -1;
//		}
//	}
//	dp[1][1] = 0;
//	q.push(make_pair(0, make_pair(1, 1)));
//	while (!q.empty()) {
//		int x = q.top().second.first, y = q.top().second.second;
//		int dist = -q.top().first;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int xx = x + d[i][0], yy = y + d[i][1];
//			if (xx < 1 || yy<1 || xx> N || yy > N) continue;
//			if (dp[xx][yy] == -1) {
//				if (map[xx][yy] == 0) {
//					dp[xx][yy] = dp[x][y] + 1;
//					q.push(make_pair(-dp[xx][yy], make_pair(xx, yy)));
//				}
//				else {
//					dp[xx][yy] = dp[x][y];
//					q.push(make_pair(-dp[xx][yy], make_pair(xx, yy)));
//				}
//			}
//		}
//	}
//	//for (int i = 1; i <= N; i++) {
//	//	for (int j = 1; j <= N; j++) {
//	//		cout << dp[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//	printf("%d", dp[N][N]);
//	return 0;
//}