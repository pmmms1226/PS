//#include <cstdio>
//#include <iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
////bool dp[1000001];
//int sum_a[1000001];
//int sum_b[1000001];
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
//		int a, b, c, n, k;
//		scanf("%d %d %d", &a, &b, &c);
//		printf("Case #%d\n", test_case);
//		for (int i = 0; i < c; i++) {
//			scanf("%d %d", &n, &k);
//			for (int j = a + 1; j <= a + b; j++) {
//				sum_a[j] = 1;
//				sum_a[j] += sum_a[j - 1];
//			}
//			for (int j = b + 1; j <= a + b; j++) {
//				sum_b[j] = 1;
//				sum_b[j] += sum_b[j - 1];
//			}
//			for (int j = a + b + 1; j <= n; j++) {
//				int p = max(j - a*k, 1);
//				int sum = sum_b[j - a] - sum_b[p - 1];
//				if (sum != j - p - a + 1) {
//					sum_a[j] = 1;
//				}
//				sum_a[j] += sum_a[j - 1];
//				p = max(j - b*k, 1);
//				sum = sum_a[j - b] - sum_a[p - 1];
//				if (sum != j - p - b + 1) sum_b[j] = 1;
//				sum_b[j] += sum_b[j - 1];
//			}
//			if (sum_a[n] - sum_a[n - 1]) printf("%c" , 'a');
//			else printf("%c" , 'b');
//			for (int j = 0; j <= 1000000; j++) {
//				sum_a[j] = 0;
//				sum_b[j] = 0;
//			}
//		}
//		printf("\n");
//
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//
//
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}