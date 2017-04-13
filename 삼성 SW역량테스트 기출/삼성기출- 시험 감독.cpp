//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int arr[1000001];
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n, b, c;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d %d", &b, &c);
//	long long ans = 0;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] <= b) {
//			arr[i] = 0;
//		}
//		else arr[i] -= b;
//		ans++;
//		if (arr[i] == 0) continue;
//		if (arr[i] % c) ans += arr[i] / c + 1;
//		else ans += arr[i] / c;
//	}
//	printf("%lld", ans);
//	return 0;
//}