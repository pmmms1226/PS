//#include <cstdio>
//#include <iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//vector <pair<int, int> > v[100001];
//bool visit[100001];
//long long dist[100001];
//int s[100001];
//#define INF 1e9
//int n, m, k;
//void DS(int idx) {
//	for (int i = 0; i <= n; i++) {
//		dist[i] = INF;
//		visit[i] = 0;
//	}
//	priority_queue <pair<long long, int> > q;
//	q.push(make_pair(0, idx));
//	dist[idx] = 0;
//	while (!q.empty()) {
//		int cost = -q.top().first;
//		int here = q.top().second;
//		q.pop();
//		if (visit[here]) continue;
//		visit[here] = 1;
//		int size = v[here].size();
//		for (int i = 0; i < size; i++) {
//			int there = v[here][i].first;
//			long long nCost = dist[here] + v[here][i].second;
//			if (dist[there] == nCost) {
//				if (s[here] < s[there]) s[there] = s[here];
//			}
//			else if (nCost < dist[there]) {
//				dist[there] = nCost;
//				q.push(make_pair(-dist[there], there));
//				if (here != 0) s[there] = s[here];
//			}
//		}
//
//
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
//	/* setbuf 함수를 사용하지 않으면, 본인의 프로그램이 제한 시간 초과로 강제 종료 되었을 때,
//	C++에서 printf를 사용할 경우, printf로 출력한 내용이 채점되지 않고 '0점'이 될 수도 있습니다.
//	따라서 printf를 사용할 경우 setbuf(stdout, NULL) 함수를 반드시 사용하시기 바랍니다. */
//	setbuf(stdout, NULL);
//
//	int T;
//	int test_case;
//
//	scanf("%d", &T);	// Codeground 시스템에서는 C++에서도 scanf 함수 사용을 권장하며, cin을 사용하셔도 됩니다.
//	for (test_case = 1; test_case <= T; test_case++) {
//		// 이 부분에서 알고리즘 프로그램을 작성하십시오. 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
//		scanf("%d %d %d", &n, &m, &k);
//		for (int i = 0; i < m; i++) {
//			int a, b, c;
//			scanf("%d %d %d", &a, &b, &c);
//			v[a].push_back(make_pair(b, c));
//			v[b].push_back(make_pair(a, c));
//		}
//		for (int i = 0; i <= n; i++) {
//			s[i] = INF;
//		}
//		for (int i = 0; i < k; i++) {
//			int a;
//			scanf("%d", &a);
//			v[0].push_back(make_pair(a, 0));
//			s[a] = a;
//		}
//		DS(0);
//		long long ans1 = 0, ans2 = 0;
//		for (int i = 1; i <= n; i++) {
//			ans1 += dist[i];
//			ans2 += s[i];
//		}
//		for (int i = 0; i <= n; i++) {
//			v[i].clear();
//		}
//
//
//
//		// 이 부분에서 정답을 출력하십시오. Codeground 시스템에서는 C++에서도 printf 사용을 권장하며, cout을 사용하셔도 됩니다.
//		printf("Case #%d\n", test_case);
//		printf("%lld\n%lld\n", ans1, ans2);
//
//	}
//
//	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
//}