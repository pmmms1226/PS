//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<cmath>
//#include<vector>
//using namespace std;
//int arr[101];
//vector <int> v;
////int func(int m, int n) {
////	int r;
////	if (m < n) swap(m, n);
////	while (n != 0) {
////		r = m % n;
////		m = n;
////		n = r;
////	}
////	return m;
////}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int N;
//	scanf("%d", &N);
//	int MIN = 987654321;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//		if (MIN > arr[i]) MIN = arr[i];
//	}
//	for (int i = 0; i < N; i++) {
//		arr[i] = arr[i] - MIN;
//	}
//	for (int i = 1; i < N; i++) {
//		int m = arr[i], n = arr[i - 1];
//		while (n != 0) {
//			int r = m%n;
//			m = n;
//			n = r;
//		}
//		arr[i] = m;
//	}
//	for (int i = 2; i*i <= arr[N - 1]; i++) {
//		if (arr[N - 1] % i == 0) {
//			v.push_back(i);
//			if (i*i == arr[N - 1]) continue;
//			v.push_back(arr[N - 1] / i);
//		}
//	}
//	v.push_back(arr[N - 1]);
//	sort(v.begin(), v.end());
//	for (auto it : v) {
//		printf("%d ", it);
//	}
//	return 0 ;
//}