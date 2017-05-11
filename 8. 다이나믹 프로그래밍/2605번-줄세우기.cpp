//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//struct A {
//	int stu, num;
//};
//A arr[101];
//int main() {
//	freopen("input.txt", "r", stdin);
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &arr[i].num);
//		arr[i].stu = i;
//	}
//	for (int i = 2; i <= n; i++) {
//		int tmp = arr[i].num;
//		int j = i;
//		while (tmp--) {
//			swap(arr[j], arr[j - 1]);
//			j--;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		printf("%d ", arr[i].stu);
//	}
//	return 0;
//}