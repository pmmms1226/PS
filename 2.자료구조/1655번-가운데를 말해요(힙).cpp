//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<queue>
//using namespace std;
//priority_queue <int> low, up;
//int mid;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int N;
//	int sizeLow = 0, sizeUp = 0;
//	scanf("%d", &N);
//	scanf("%d", &mid);
//	N--;
//	printf("%d\n", mid);
//	while (N--) {
//		int num;
//		scanf("%d", &num);
//		if (num > mid) {
//			up.push(-num);
//			sizeUp++;
//		}
//		else {
//			low.push(num);
//			sizeLow++;
//		}
//		if (sizeLow > sizeUp) {
//			int tmp = mid;
//			mid = low.top();
//			low.pop();
//			sizeLow--;
//			up.push(-tmp);
//			sizeUp++;
//		}
//		else if (sizeLow + 1 < sizeUp) {
//			int tmp = mid;
//			mid = -up.top();
//			up.pop();
//			sizeUp--;
//			low.push(tmp);
//			sizeLow++;
//		}
//
//		printf("%d\n", mid);
//	}
//	return 0;
//}