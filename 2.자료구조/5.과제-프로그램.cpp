#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;
int N, K, L, R;
long long sum[1000001];
int cnt[1000001];
void something(int jump) {
	int i = 0;
	while (i < N) {
		sum[i] = sum[i] + cnt[jump];
		i = i + jump;
	}
}
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	int b,t;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < K; i++) {
		scanf("%d", &b);
		cnt[b] =cnt[b]+ 1;
	}
	for (int i = 1; i < N; i++) {
		if (cnt[i] == 0) continue;
		else something(i);
	}
	for (int i = 1; i < N; i++) {
		sum[i] = sum[i] + sum[i - 1];
	}
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &L, &R);
		if (L == 0) printf("%lld\n", sum[R]);
		else printf("%lld\n", sum[R] - sum[L - 1]);
	}
	return 0;
}