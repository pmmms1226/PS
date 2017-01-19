//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<stdio.h>
//#include<queue>
//#include<vector>
//#include<cmath>
//
///*
//시간: o(N)
//공간: o()
//*/
//using namespace std;
//
//vector <int> v;
//int visit[300001];
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int A, P;
//	scanf("%d %d", &A, &P);
//	v.push_back(A);
//	visit[A] = 1;
//	int sum = 0;
//	int temp ;
//	int i = 1;
//	while(1) {
//		sum = 0;
//		 if (v[i - 1] >= 100000) {
//			int ttemp = v[i - 1];
//			for (int i = 1; i <= 6; i++) {
//				temp = ttemp % 10;
//				sum += pow(temp, P);
//				ttemp = ttemp / 10;
//			}
//		}
//		else if (v[i - 1] >= 10000) {
//			int ttemp = v[i - 1];
//			for (int i = 1; i <= 5; i++) {
//				temp = ttemp % 10;
//				sum += pow(temp, P);
//				ttemp = ttemp / 10;
//			}
//		}
//		else if (v[i-1] >= 1000) {
//			int ttemp = v[i - 1];
//			for (int i = 1; i <= 4; i++) {
//				temp = ttemp % 10;
//				sum += pow(temp, P);
//				ttemp = ttemp / 10;
//			}
//		}
//		else if (v[i - 1] >= 100) {
//			int ttemp = v[i - 1];
//			for (int i = 1; i <= 3; i++) {
//				temp = ttemp % 10;
//				sum += pow(temp, P);
//				ttemp = ttemp / 10;
//			}
//		}
//		else if (v[i - 1] >= 10) {
//			int ttemp = v[i - 1];
//			for (int i = 1; i <= 2; i++) {
//				temp = ttemp % 10;
//				sum += pow(temp, P);
//				ttemp = ttemp / 10;
//			}
//		}
//		else if (v[i - 1] >= 1) {
//			sum += pow(v[i - 1], P);
//		}
//		if (visit[sum] == 0) {
//			v.push_back(sum);
//			visit[sum] = 1;
//			i++;
//		}
//		else {
//			break;
//		}
//	}
//	
//	int cnt = 0;
//	for (auto it : v) {
//		if (it == sum) break;
//		else cnt++;
//	}
//	printf("%d", cnt);
//
//	return 0;
//}