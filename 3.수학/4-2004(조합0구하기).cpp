#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	long long a, b;
	long long two_cnt = 0, five_cnt = 0;
	scanf("%lld  %lld", &a, &b);
	if (a / 2 < b) b = a - b;
	for (long long i = 5; i <= a; i *= 5) {
		five_cnt += a / i;
	}
	for (long long i = 2; i <= a; i *= 2) {
		two_cnt += a / i;
	}
	for (long long i = 5; i <= a-b; i *= 5) {
		five_cnt -= (a-b) / i;
	}
	for (long long i = 2; i <= a-b; i *= 2) {
		two_cnt -= (a-b) / i;
	}
	for (long long i = 5; i <= b; i *= 5) {
		five_cnt -= b / i;
	}
	for (long long i = 2; i <= b; i *= 2) {
		two_cnt -= b / i;
	}

	printf("%lld\n", min(five_cnt, two_cnt));
	return 0;
}