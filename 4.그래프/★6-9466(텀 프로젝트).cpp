#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<queue>
#include<vector>
#include<cmath>
#include<stack>

/*
인접리스트
시간: o(v+e)
공간: o(v+e)
*/
/*
	* 조건에 맞춰 dfs를 작성.
	* dist-> 출발 V부터 거리.
	* s 시작 V를 저장한 배열.
	
*/
using namespace std;
int V;
int arr[100001], dist[100001], s[100001];
int dfs(int cur, int cnt, int step) {
	if (dist[cur] != 0) {
		if (step != s[cur]) {
			return 0;
		}
		else
			return cnt - dist[cur];
	}
	dist[cur] = cnt;
	s[cur] = step;
	dfs(arr[cur], cnt + 1, step);
}
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	int t ;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &V);
		for (int i = 1; i <= V; i++) {
			dist[i] = 0;
			arr[i] = 0;
			s[i] = 0;
		}
		for (int i = 1; i <= V; i++) {
			scanf("%d", &arr[i]);

		}
		int ans= 0;
		for (int i = 1; i <= V; i++) {
			if (dist[i] == 0) ans += dfs(i, 1, i);
		}
		printf("%d\n", V - ans);
	}
	
	return 0;
}