//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//using namespace std;
//int arr[100001], TreeSize=1;
//bool isempty() {
//	if (TreeSize == 1) return true;
//	else return false;
//}
//void pop() {
//	printf("%d\n", arr[1]);
//	swap(arr[1], arr[TreeSize-1]);
//	arr[TreeSize-1] = 987654321;
//	TreeSize--;
//	int parent = 1, Lchild = parent * 2, Rchild = parent * 2 + 1;
//	while (parent * 2 <= TreeSize - 1 && min(arr[Lchild], arr[Rchild]) < arr[parent]) {
//		if (arr[Lchild] < arr[Rchild]) {
//			swap(arr[parent], arr[Lchild]);
//			parent = Lchild;
//			Lchild = parent * 2;
//			Rchild = parent * 2 + 1;
//		}else{
//			swap(arr[parent], arr[Rchild]);
//			parent = Rchild;
//			Lchild = parent * 2;
//			Rchild = parent * 2 + 1;
//		}
//	}
//}
//void push(int data) {
//	arr[TreeSize] = data;
//	TreeSize++;
//	int parent = (TreeSize-1)/2 , child = TreeSize-1;
//	while (parent != 0 && arr[parent] > arr[child]) {
//		swap(arr[parent], arr[child]);
//		child = parent;
//		parent = parent / 2;
//	}
//}
//
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int N , s;
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%d", &s);
//		if (s == 0) {
//			if (isempty()) printf("%d\n", 0);
//			else {
//				pop();
//			}
//		}
//		else {
//			push(s);
//			/*for (int i = 1; i < TreeSize; i++) {
//				printf("%d ", arr[i]);
//			}
//			cout << endl;*/
//		}
//	}
//	
//	return 0;
//}