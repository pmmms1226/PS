//#include <cstdio>
//#include <iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//int cnt[51], cnt_check[51];
//struct A {
//	int a, b;
//};
//A arr[2501];
//bool cmp(const A &a, const A &b) {
//	if (a.a == b.a) {
//		return a.b < b.b;
//	}
//	return a.a < b.a;
//}
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
//		int n,h;
//		scanf("%d", &n);
//		int idx = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &h);
//			cnt[i] = h;
//			for (int j = 0; j < h; j++) {
//				scanf("%d", &arr[idx].a);
//				arr[idx].b = i;
//				idx++;
//			}
//		}
//		sort(arr, arr + idx, cmp);
//		int pre = arr[0].b;
//		cnt_check[pre]++;
//		int ans = 0;
//		for (int i = 1; i < idx; i++) {
//			int cur = arr[i].b;
//			cnt_check[cur]++;
//			if (pre == cur) continue;
//			ans++;
//			if (cnt_check[pre] != cnt[pre]) ans++;
//			pre = cur;
//		}
//		for (int i = 0; i < n; i++) {
//			cnt_check[i] = 0;
//		}
//
//
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("#testcase%d\n", test_case);
//		printf("%d\n", ans);
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}