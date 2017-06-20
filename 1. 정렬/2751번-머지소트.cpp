//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int n;
//int arr[1000001];
//int tmp[1000001];
//void Merge(int start, int mid, int end) {
//	
//	int i = start;
//	int j = mid + 1;
//	int idx = start;
//	while (i <= mid && j <= end) {
//		if (arr[i] < arr[j]) {
//			tmp[idx] = arr[i];
//			idx++; i++;
//		}
//		else {
//			tmp[idx] = arr[j];
//			idx++; j++;
//		}
//	}
//	if (i <= mid) {
//		for (int m = i; m <= mid; m++) {
//			tmp[idx] = arr[m];
//			idx++;
//		}
//	}
//	else if (j <= end) {
//		for (int m = j; m <= end; m++) {
//			tmp[idx] = arr[m];
//			idx++;
//		}
//	}
//	for (int m = start; m <= end; m++) {
//		arr[m] = tmp[m];
//	}
//
//}
//void mergeSort(int start, int end) {
//	if (start >= end) return;
//	int pivot = (start + end) / 2;
//	mergeSort(start, pivot);
//	mergeSort(pivot + 1, end);
//
//	Merge(start, pivot, end);
//}
//
//int main() {
//	freopen("input.txt", "r", stdin);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	mergeSort(0, n - 1);
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}