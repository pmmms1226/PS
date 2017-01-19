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
	/*
		유클리드 호제법을 사용한다.
	*/
	long long a, b;
	long long x, y, r;
	scanf("%lld %lld", &a, &b);
	if (a > b) x = a, y = b;
	else x = b, y = a;
	int flag = 0;
	long long result = 1;
	while (y != 0) {
		r = x%y;
		x = y;
		y = r;
	}
	for (long long i = 0; i < x; i++) {
		printf("%d", 1);
	}
	printf("\n");
	return 0;
}