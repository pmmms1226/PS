#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int dp[1001][3];
int N;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &dp[i][j]);
		}
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			if(j == 0)
				dp[i][j] = dp[i][j] + min(dp[i - 1][1], dp[i - 1][2]);
			else if(j == 1)
				dp[i][j] = dp[i][j] + min(dp[i - 1][0], dp[i - 1][2]);
			else if(j==2)
				dp[i][j] = dp[i][j] + min(dp[i - 1][0], dp[i - 1][1]);
		}
	}
	int min = 987654321;
	for (int i = 0; i < 3; i++) {
		if (dp[N - 1][i] < min) min = dp[N - 1][i];
	}
	printf("%d", min);
	return 0;
}