//#include <cstdio>
//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//long long arr[100001], diff[100001];
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
//		int n;
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++) {
//			scanf("%lld", &arr[i]);
//		}
//		bool zero = false;
//		for (int i = 1; i < n; i++) {
//			diff[i - 1] = arr[i] - arr[i - 1];
//			if (diff[i - 1] == 0) zero = true;
//		}
//		bool ok = false;
//		if (zero) {
//			for (int i = 0; i < n - 1; i++) {
//				if (diff[i] != 0) {
//					ok = true;
//					break;
//				}
//			}
//		}
//		if (zero && ok) {
//			printf("Case #%d\n", test_case);
//			printf("%d\n", 0);
//			continue;
//		}
//		if (zero && !ok) {
//			printf("Case #%d\n", test_case);
//			printf("%d\n", 1);
//			continue;
//		}
//		long long tmp = diff[0];
//		for (int i = 1; i < n - 1; i++) {
//			if (tmp == diff[i]) continue;
//			long long m = max(tmp, diff[i]);
//			long long n = min(tmp, diff[i]);
//			long long r = m % n;
//			m = n, n = r;
//			while (r != 0) {
//				r = m % n;
//				m = n, n = r;
//			}
//			tmp = m;
//		}
//		int ans = 0 , i= 0;
//		for (i = 1; i*i < tmp; i++) {
//			if (tmp % i == 0) ans++;
//		}
//		ans *= 2;
//		if (i*i == tmp) ans++;
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		printf("%d\n", ans);
//
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}