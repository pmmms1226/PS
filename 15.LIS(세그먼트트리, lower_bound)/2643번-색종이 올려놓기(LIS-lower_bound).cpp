//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//struct A {
//	int a, b;
//};
//A arr[1001];
//int buf[1001];
//bool compare(const A &a, const A &b) {
//	if (a.a == b.a) {
//		return a.b > b.b;
//	}
//	return a.a > b.a;
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		scanf("%d %d", &a, &b);
//		if (a < b) {
//			arr[i].a = b, arr[i].b = a;
//		}
//		else
//			arr[i].a = a, arr[i].b = b;
//	}
//	sort(arr, arr + n, compare);
//	int size = 1;
//	buf[0] = arr[0].b;
//	for (int i = 1; i < n; i++) {
//		if (buf[size - 1] >= arr[i].b) {
//			buf[size] = arr[i].b;
//			size++;
//			continue;
//		}
//		int s = 0, e = size, mid = 0;
//		while (s <= e) {
//			mid = (s + e) / 2;
//			if (buf[mid] >= arr[i].b) {
//				s = mid + 1;
//			}
//			else e = mid - 1;
//		}
//		buf[s] = arr[i].b;
//	}
//	printf("%d", size);
//	return 0;
//}