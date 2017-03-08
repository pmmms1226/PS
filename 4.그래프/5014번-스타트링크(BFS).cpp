//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
//using namespace std;
//#define INF 1000000000
//
//int  F , S , G, U, D;
//int dp[1000001] , visit[1000001];
//queue <int> q;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d %d %d %d", &F, &S, &G, &U, &D);
//	for (int i = 1; i <= F; i++) {
//		dp[i] = INF;
//	}
//	dp[S] = 0;
//	q.push(S);
//	visit[S] = 1;
//	while (!q.empty()) {
//		int idx = q.front();
//		if (idx == G) break;
//		int up = idx + U, down = idx - D;
//		if (up <= F && visit[up] == 0) {
//			dp[up] = dp[idx] + 1;
//			visit[up] = 1;
//			q.push(up);
//		}
//		if (down >= 1 && visit[down] == 0) {
//			dp[down] = dp[idx] + 1;
//			visit[down] = 1;
//			q.push(down);
//		}
//
//		q.pop();
//	}
//	if (dp[G] == INF) {
//		printf("use the stairs\n");
//	}
//	else printf("%d", dp[G]);
//
//	return 0;
//}