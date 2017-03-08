//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//long long arr[100001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int a;
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a);
//		if (i == 1) arr[i] = a;
//		else arr[i] = a + arr[i - 1];
//	}
//	long long max = 0;
//	for (int i = m; i <= n; i++) {
//		if (max < arr[i] - arr[i - m]) max = arr[i] - arr[i - m];
//	}
//	printf("%lld", max);
//	return 0;
//}