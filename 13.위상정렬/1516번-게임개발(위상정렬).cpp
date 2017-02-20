//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<vector>
//using namespace std;
//int N , cnt[501] , T[501] , totalT[501];
//vector <int> v[501];
//void func(int idx) {
//	if (cnt[idx]) return;
//	cnt[idx] = -1;
//	for (auto it : v[idx]) {
//		totalT[it] = max(totalT[it], totalT[idx] + T[it]);
//		cnt[it]--;
//		func(it);
//	}
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	int time , a;
//	for (int i = 1; i <= N; i++) {
//		scanf("%d %d", &time , &a);
//		T[i] = time;
//		while (a != -1) {
//			v[a].push_back(i);
//			cnt[i]++;
//			scanf("%d", &a);
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		if (cnt[i] != -1) {
//			totalT[i] = T[i];
//			func(i);
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		printf("%d\n", totalT[i]);
//	}
//	return 0;
//}