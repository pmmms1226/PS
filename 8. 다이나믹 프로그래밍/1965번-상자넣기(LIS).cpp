//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//using namespace std;
//int arr[1001];
//vector <int> v;
//int size;
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	v.push_back(arr[0]);
//	int size = 1;
//	for (int i = 1; i < n; i++) {
//		if (v[size - 1] < arr[i]) {
//			v.push_back(arr[i]);
//			size++;
//			continue;
//		}
//		int s = 0, e = size, mid;
//		while (s <= e) {
//			mid = (s + e) / 2;
//			if (arr[i] > v[mid]) s = mid+1;
//			else e = mid - 1;
//		}
//		v[s] = arr[i];
//	}
//	printf("%d", size);
//	return 0;
//}