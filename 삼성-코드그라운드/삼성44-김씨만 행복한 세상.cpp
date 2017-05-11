//#include <cstdio>
//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//
//using namespace std;
//
//int main(int argc, char** argv) {
//	/* �Ʒ� freopen �Լ��� sample_input.txt �� read only �������� �� ��,
//	������ ǥ�� �Է�(Ű����) ��� sample_input.txt ���Ϸ� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
//	���� ������ PC ���� �׽�Ʈ �� ����, �Է°��� sample_input.txt�� ������ �� freopen �Լ��� ����ϸ�,
//	�� �Ʒ����� scanf �Լ� �Ǵ� cin�� ����Ͽ� ǥ���Է� ��� sample_input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
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
//		int n, l;
//		scanf("%d %d", &n, &l);
//		vector <int > v[201];
//		for (int i = 0; i < l; i++) {
//			int a, b;
//			scanf("%d %d", &a, &b);
//			v[a].push_back(b);
//			v[b].push_back(a);
//		}
//		int visit[201];
//		int check[201];
//		for (int i = 0; i <= n; i++) {
//			visit[i] = 0;
//			check[i] = 0;
//		}
//		queue <pair<int, int > > q;
//		q.push(make_pair(1,1));
//		bool ans = true;
//		// 1 = A , 2 = B
//		while (!q.empty()) {
//			int cur = q.front().first;
//			int AB = q.front().second;
//			int nAB;
//			AB == 1 ? nAB = 2 : nAB = 1;
//			q.pop();
//			if (visit[cur] == 1) {
//				continue;
//			}
//			visit[cur] = 1;
//			int size = v[cur].size();
//			for (int i = 0; i < size; i++) {
//				int there = v[cur][i];
//				if (visit[there] == 0) {
//					q.push(make_pair(there, nAB));
//					check[there] = nAB;
//				}
//				else {
//					if (check[there] == AB) {
//						ans = false;
//						break;
//					}
//				}
//			}
//			if (!ans) break;
//		}
//		for (int i = 0; i <= n; i++) {
//			v[i].clear();
//		}
//
//
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		ans ? printf("%d\n", 1) : printf("%d\n", 0);
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}