//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int arr[10001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int n,m;
//	scanf("%d", &n);
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		if (max < arr[i]) max = arr[i];
//	}
//	scanf("%d", &m);
//	long long sum = 0;
//	int s = 0, e = m, mid = 0, ans;
//	for (int i = 0; i < n; i++) {
//		sum += arr[i];
//	}
//	if (sum <= m) printf("%d", max);
//	else {
//		while (s <= e) {
//			sum = 0;
//			mid = (s + e) / 2;
//			for (int i = 0; i < n; i++) {
//				if (mid < arr[i]) sum += mid;
//				else sum += arr[i];
//			}
//			if (sum <= m) {
//				s = mid + 1;
//				ans = mid;
//			}
//			else {
//				e = mid - 1;
//			}
//		}
//		printf("%d", ans);
//	}
//	
//	return 0;
//}