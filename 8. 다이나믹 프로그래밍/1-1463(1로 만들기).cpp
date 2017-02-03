/////*
////DP
////시간: O(N)
////공간: O(N)
////*/
////#include<iostream>
////#include<cstdio>
////#include<string>
////#include<cmath>
////#include<queue>
////using namespace std;
////int dp[1000001];
////#define INF 1000000
////queue <int> q;
////int N;
////int main() {
//////#ifdef _CONSOLE
//////	freopen("intput.txt", "r", stdin);
//////#endif
////	scanf("%d", &N);
////	q.push(N);
////	for (int i = 0; i <= N; i++) {
////		dp[i] = INF;
////	}
////	dp[N] = 0;
////	while (!q.empty()) {
////		int cur = q.front();
////		q.pop();
////		if (cur % 2 == 0) {
////			if (dp[cur / 2] > dp[cur] + 1) {
////				q.push(cur / 2);
////				dp[cur / 2] = dp[cur] + 1;
////			}
////		}
////		if (cur % 3 == 0) {
////			if (dp[cur / 3] > dp[cur] + 1) {
////				q.push(cur / 3);
////				dp[cur / 3] = dp[cur] + 1;
////			}
////		}
////		if (dp[cur - 1] > dp[cur] + 1) {
////			q.push(cur - 1);
////			dp[cur - 1] = dp[cur] + 1;
////		}
////	}
////	printf("%d", dp[1]);
////	return 0;
////}