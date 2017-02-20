#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int N, K;
int money[1000001];
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &money[i]);
	}
	int tmp = K;
	int ans = 0;
	for (int i = N; i > 0; i--) {
		if (money[i] > tmp) continue;
		ans += tmp / money[i];
		tmp = tmp % money[i];
	}
	printf("%d", ans);

	return 0;
}