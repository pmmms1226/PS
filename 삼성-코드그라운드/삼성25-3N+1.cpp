//#include <cstdio>
//#include <iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//int dp[10001];
//int func(int idx) {
//	int &ret = dp[idx];
//	if (dp[idx] != -1) return ret;
//	if (idx % 2 == 0) {
//		ret = func(idx / 2) + 1;
//	}
//	else
//		ret = func(idx * 3 + 1) + 1;
//	return ret;
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
//	//for (int i = 0; i < 10001; i++) {
//	//	dp[i] = -1;
//	//}
//	//dp[1] = 0, dp[2] = 1;
//	//for (int i = 1; i <= 1200; i++) {
//	//	func(i);
//	//}
//	for (int i = 3; i <= 1200; i++) {
//		int tmp = i, cnt = 0;
//		while (tmp != 1) {
//			if (tmp % 2 == 0) tmp = tmp / 2;
//			else tmp = tmp * 3 + 1;
//			cnt++;
//		}
//		if (dp[cnt] != 0) continue;
//		else dp[cnt] = i;
//	}
//	for (test_case = 1; test_case <= T; test_case++) {
//		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
//		int n;
//		scanf("%d", &n);
//		unsigned long long max = pow(2.0, (double)n);
//		long long min = 0;
//		min = dp[n];
//
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		min == 0 ? printf("%llu ", max) : printf("%lld ", min);
//		printf("%llu\n", max);
//
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}