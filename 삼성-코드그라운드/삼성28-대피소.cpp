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
//	/* �Ʒ� freopen �Լ��� input.txt �� read only �������� �� ��,
//	������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸ� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
//	���� ������ PC ���� �׽�Ʈ �� ����, �Է°��� input.txt�� ������ �� freopen �Լ��� ����ϸ�,
//	�� �Ʒ����� scanf �Լ� �Ǵ� cin�� ����Ͽ� ǥ���Է� ��� input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
//	����, ���� PC���� freopen �Լ��� ������� �ʰ� ǥ���Է��� ����Ͽ� �׽�Ʈ�ϼŵ� �����մϴ�.
//	��, Codeground �ý��ۿ��� "�����ϱ�" �� ������ �ݵ�� freopen �Լ��� ����ų� �ּ�(//) ó�� �ϼž� �մϴ�. */
//	freopen("input.txt", "r", stdin);
//
//	/* setbuf �Լ��� ������� ������, ������ ���α׷��� ���� �ð� �ʰ��� ���� ���� �Ǿ��� ��,
//	C++���� printf�� ����� ���, printf�� ����� ������ ä������ �ʰ� '0��'�� �� ���� �ֽ��ϴ�.
//	���� printf�� ����� ��� setbuf(stdout, NULL) �Լ��� �ݵ�� ����Ͻñ� �ٶ��ϴ�. */
//	setbuf(stdout, NULL);
//
//	int T;
//	int test_case;
//
//	scanf("%d", &T);	// Codeground �ý��ۿ����� C++������ scanf �Լ� ����� �����ϸ�, cin�� ����ϼŵ� �˴ϴ�.
//	for (test_case = 1; test_case <= T; test_case++) {
//		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
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
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		printf("%lld\n%lld\n", ans1, ans2);
//
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}