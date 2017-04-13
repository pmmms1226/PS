//// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
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
//	/* �Ʒ� freopen �Լ��� input.txt �� read only �������� �� ��,
//	������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸ� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
//	���� ������ PC ���� �׽�Ʈ �� ����, �Է°��� input.txt�� ������ �� freopen �Լ��� ����ϸ�,
//	�� �Ʒ����� scanf �Լ� �Ǵ� cin�� ����Ͽ� ǥ���Է� ��� input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
//	����, ���� PC���� freopen �Լ��� ������� �ʰ� ǥ���Է��� ����Ͽ� �׽�Ʈ�ϼŵ� �����մϴ�.
//	��, Codeground �ý��ۿ��� "�����ϱ�" �� ������ �ݵ�� freopen �Լ��� ����ų� �ּ�(//) ó�� �ϼž� �մϴ�. */
//	freopen("input.txt", "r", stdin);
//
//	setbuf(stdout, NULL);
//
//	int TC;
//	int test_case;
//
//	scanf("%d", &TC);	// cin ��� ����
//	for (test_case = 1; test_case <= TC; test_case++) {
//		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�.
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
//		// �� �κп��� ������ ����Ͻʽÿ�.
//		printf("Case #%d\n", test_case);// cout ��� ����
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
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}