#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
#include<queue>
using namespace std;
#define INF 987654321
int N;
long long M, arr[10001];
int ans;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d %lld", &N, &M);
	int s = 0, e = 0 , sum = 0;
	for (int i = 0; i < N; i++) {
		scanf("%lld", &arr[i]);
	}
	while (1) {
		if (sum >= M) sum -= arr[s++];
		else if (e == N) break;
		else sum += arr[e++];
		if (sum == M) ans++;
		
	}
	printf("%d", ans);
	return 0;
}