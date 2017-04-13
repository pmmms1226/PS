//// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
//#include <cstdio>
//#include <iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<utility>
//using namespace std;
//#define INF 987654321
//int n, m;
//vector <pair<int, int> > v[1001];
//bool ans[1001];
//int visit[1001] , dist[1001] , cnt[1001];
//void func(int idx) {
//	priority_queue <pair<int, int> > q;
//	q.push(make_pair(0, idx));
//	dist[idx] = 0;
//	cnt[idx]++;
//	while (!q.empty()) {
//		int cur = q.top().second;
//		q.pop();
//		if (visit[cur] == 1) continue;
//		visit[cur] = 1;
//		int size = v[cur].size();
//		for (int i = 0; i < size; i++) {
//			if (visit[v[cur][i].first] == 0) {
//				if (dist[v[cur][i].first] > dist[cur] + v[cur][i].second) {
//					dist[v[cur][i].first] = dist[cur] + v[cur][i].second;
//					q.push(make_pair(-dist[v[cur][i].first], v[cur][i].first));
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (idx == i) continue;
//		int size = v[i].size();
//		for (int j = 1; j < size; j++) {
//			if (dist[v[i][j].first] - dist[i] == v[i][j].second) ans[i] = true;
//		}
//	}
//}
//int main(int argc, char** argv) {
//	/* 아래 freopen 함수는 input.txt 를 read only 형식으로 연 후,
//	앞으로 표준 입력(키보드) 대신 input.txt 파일로 부터 읽어오겠다는 의미의 코드입니다.
//	만약 본인의 PC 에서 테스트 할 때는, 입력값을 input.txt에 저장한 후 freopen 함수를 사용하면,
//	그 아래에서 scanf 함수 또는 cin을 사용하여 표준입력 대신 input.txt 파일로 부터 입력값을 읽어 올 수 있습니다.
//	또한, 본인 PC에서 freopen 함수를 사용하지 않고 표준입력을 사용하여 테스트하셔도 무방합니다.
//	단, Codeground 시스템에서 "제출하기" 할 때에는 반드시 freopen 함수를 지우거나 주석(//) 처리 하셔야 합니다. */
//	freopen("input.txt", "r", stdin);
//
//	setbuf(stdout, NULL);
//
//	int TC;
//	int test_case;
//
//	scanf("%d", &TC);	// cin 사용 가능
//	for (test_case = 1; test_case <= TC; test_case++) {
//		// 이 부분에서 알고리즘 프로그램을 작성하십시오.
//		scanf("%d %d", &n, &m);
//		for (int i = 0; i < m; i++) {
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			v[a].push_back(make_pair(b, c));
//			v[b].push_back(make_pair(a, c));
//		}
//		for (int k = 1; k <= n; k++) {
//			for (int i = 1; i <= n; i++) {
//				dist[i] = INF;
//				visit[i] = 0;
//			}
//			func(k);
//		}
//		int size = 0;
//		for (int i = 1; i <= n; i++) {
//			if (!ans[i]) size++;
//		}
//		// 이 부분에서 정답을 출력하십시오.
//		printf("Case #%d\n", test_case);// cout 사용 가능
//		if (size == 0) printf("%d\n", 0);
//		else {
//			printf("%d ", size);
//			for (int i = 1; i <= n; i++) {
//				if (!ans[i]) printf("%d ", i);
//			}
//			printf("\n");
//		}
//		for (int i = 1; i <= n; i++) {
//			v[i].clear();
//			ans[i] = 0;
//		}
//	}
//
//	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
//}