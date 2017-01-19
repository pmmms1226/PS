///*
//
//*/
//#include<iostream>
//#include<vector>
//#include<cstdio>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//int N, K, ans;
//queue <pair<int , int>> q;
//int visit[200001];
//void func(int idx) {
//	q.push(make_pair(idx, 0));
//	int cur, cnt;
//	while (!q.empty()) {
//		ans++;
//		 cur = q.front().first;
//		 cnt = q.front().second;
//		q.pop();
//		if (cur == K) break;
//		if (visit[cur] == 0) {
//			if(cur+1 < 200001)
//			q.push(make_pair(cur + 1, cnt+1));
//			if(cur-1 >= 0)
//			q.push(make_pair(cur - 1 , cnt+1));
//			if(cur*2 < 200001)
//			q.push(make_pair(cur * 2, cnt+1));
//		}
//		visit[cur] = 1;
//	}
//	ans = cnt;
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d %d", &N, &K);
//	func(N);
//	printf("%d", ans);
//
//
//	return 0;
//}