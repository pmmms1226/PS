//#include<iostream>
//#include<queue>
//#include<cstdio>
//#include<algorithm>
//#include<string>
//using namespace std;
//int arr[101][101];
//int dp[101][101];
//int visit[101][101];
//int d[4][2] = { {1,0} , {0,1} , {-1,0} , {0,-1} };
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int N, M;
//	scanf("%d %d", &N, &M);
//	string s;
//	for (int i = 1; i <= M; i++) {
//		cin >> s;
//		for (int j = 1; j <= N; j++) {
//			arr[i][j] = s[j-1]-'0';
//		}
//	}
//
//	priority_queue <pair<int , pair<int , int>>> pq;
//	pq.push(make_pair(0, make_pair(1, 1)));
//	while (!pq.empty()) {
//		int x = pq.top().second.first, y = pq.top().second.second;
//		int dist = -pq.top().first;
//		pq.pop();
//		for (int i = 0; i < 4; i++) {
//			int xx = x + d[i][0], yy = y + d[i][1];
//			if (xx < 1 || yy < 1 || xx> M || yy > N) continue;
//			if (visit[xx][yy] == 0) {
//				if (arr[xx][yy] == 1) {
//					dp[xx][yy] = dp[x][y] + 1;
//					pq.push(make_pair(-dp[xx][yy], make_pair(xx, yy)));
//					visit[xx][yy] = 1;
//				}
//				else {
//					dp[xx][yy] = dp[x][y];
//					pq.push(make_pair(-dp[xx][yy], make_pair(xx, yy)));
//					visit[xx][yy] = 1;
//				}
//			}
//		}
//	}
//	printf("%d", dp[M][N]);
//	return 0;
//}