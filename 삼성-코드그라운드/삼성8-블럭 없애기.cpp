//// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int  arr[100001];
//int TIME[100001];
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
//		int n;
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &arr[i]);
//		}
//		int ans = 1;
//		TIME[0] = 1;
//		for (int i = 1; i < n; i++) {
//			if (TIME[i - 1] < arr[i]) TIME[i] = TIME[i - 1] + 1;
//			else TIME[i] = arr[i];
//		}
//		TIME[n-1] = 1;
//		for (int i = n-1; i >= 0; i--) {
//			if (TIME[i + 1] < arr[i]) TIME[i] = min(TIME[i],TIME[i + 1] + 1);
//			else TIME[i] = min(TIME[i],arr[i]);
//
//			if (ans < TIME[i]) ans = TIME[i];
//		}
//	/*	for (int i = 0; i < n; i++) {
//			cout << TIME[i] << ' ';
//		}*/
//		// �� �κп��� ������ ����Ͻʽÿ�.
//		printf("Case #%d\n", test_case);	// cout ��� ����
//		printf("%d\n", ans);
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}