#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
long long N;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%lld", &N);
	if (N == 1) {
		return 0;
	}
	for (int i = 2; i*i <= N; i++) {
		while (N%i == 0) {
			printf("%d\n", i);
			N = N / i;
		}
	}
	if (N > 1) printf("%d\n", N);
	return 0;
}