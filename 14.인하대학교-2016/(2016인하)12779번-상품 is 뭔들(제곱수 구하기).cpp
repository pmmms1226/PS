//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	long long a, b;
//	scanf("%lld %lld", &a, &b);
//	long long total = b - a;
//	long long ans = 0;
//	ans = (long long)sqrt(b) - (long long)sqrt(a);
//	if (ans == 0) printf("%d", 0);
//	else {
//		long long n, m, r;
//		n = total;
//		m = ans;
//		while (m != 0) {
//			r = n% m;
//			n = m;
//			m = r;
//		}
//		printf("%lld/", ans/n); printf("%lld", total/n);
//	}
//	return 0;
//}