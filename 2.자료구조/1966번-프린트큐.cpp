//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
//using namespace std;
//int arr[101];
//int main() {
//	freopen("input.txt", "r", stdin);
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int n, m;
//		scanf("%d %d", &n, &m);
//		priority_queue <int> pq;
//		queue <pair<int, int> > q;
//		for (int i = 0; i < n; i++) {
//			int a; scanf("%d", &a);
//			q.push(make_pair(i + 1, a));
//			pq.push(a);
//		}
//		int cnt = 0;
//		while (1) {
//			if (pq.top() == q.front().second) {
//				cnt++;
//				if (q.front().first - 1 == m) break;
//				pq.pop();
//				q.pop();
//			}
//			else {
//				int tmp = q.front().first, pri = q.front().second;
//				q.pop();
//				q.push(make_pair(tmp, pri));
//			}
//
//		}
//		printf("%d\n", cnt);
//
//	}
//
//	return 0;
//}