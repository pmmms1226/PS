//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//#include<cstring>
//using namespace std;
//struct A {
//	int first, second;
//};
//A v[101];
//int vsize = 0;
//bool cmp(const A &a, const A &b) {
//	if (a.first == b.first)
//		return a.second < b.second;
//	else {
//		return a.first < b.first;
//	}
//}
//int main() {
//	freopen("input.txt", "r", stdin);
//	char cmd[50];
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%s", cmd);
//		if (strcmp(cmd,"order")==0) {
//			int table, time;
//			scanf("%d %d", &table, &time);
//			v[vsize].first = time;
//			v[vsize].second = table;
//			vsize++;
//			for (int j = 0; j < vsize; j++) {
//				printf("%d ", v[j].second);
//			}
//		}
//		else if (strcmp(cmd,"sort")==0) {
//			sort(v, v + vsize, cmp);
//			for (int j = 0; j < vsize; j++) {
//				printf("%d ", v[j].second);
//			}
//		}
//		else {
//			int table;
//			scanf("%d", &table);
//			int idx = -1;
//			for (int j = 0; j < vsize; j++) {
//				if (table == v[j].second) {
//					idx = j;
//					continue;
//				}
//				if (idx != -1) {
//					v[idx].first = v[j].first;
//					v[idx].second = v[j].second;
//					idx++;
//				}
//			}
//			vsize--;
//			for (int j = 0; j < vsize; j++) {
//				printf("%d ", v[j].second);
//			}
//		}
//		if (vsize == 0) {
//			printf("sleep\n");
//			continue;
//		}
//		else
//			printf("\n");
//	}
//
//	return 0;
//}