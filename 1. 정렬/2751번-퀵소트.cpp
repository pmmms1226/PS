//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int arr[1000001];
//void quickSort(int start, int end) {
//	if (start >= end) return;
//	int pivot = start;
//	int j = pivot;
//	for (int i = start + 1; i <= end; i++) {
//		if (arr[pivot] > arr[i]) {
//			j++;
//			swap(arr[j], arr[i]);
//		}
//	}
//	swap(arr[pivot], arr[j]);
//	quickSort(start, j - 1);
//	quickSort(j + 1, end);
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	quickSort(0, n - 1);
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}