//#include <cstdio>
//#include <iostream>
//
//using namespace std;
//long long dp[50001][102];
//#define MOD 1000000009
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
//		int n, k, l;
//		scanf("%d %d %d", &n, &k, &l);
//		for (int i = 0; i < 50001; i++) {
//			for (int j = 0; j < 102; j++) {
//				dp[i][j] = 0;
//			}
//		}
//		for (int i = 0; i < l; i++) {
//			int a;
//			scanf("%d", &a);
//			dp[a][101] = 1;
//		}
//		for (int i = 1; i <= n; i++) {
//			if (dp[i][101] == 1) continue;
//			for (int j = 1; j <= k; j++) {
//				int cur = i - j;
//				if (cur < 0) break;
//				if (cur == 0) {
//					dp[i][j] += 1;
//					dp[i][0] += dp[i][j];
//				}
//				else {
//					dp[i][j] = dp[cur][0] - dp[cur][j];
//					dp[i][0] =(dp[i][0]+ dp[i][j]+MOD) %MOD;
//				}
//			}
//		}
//
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		printf("%lld\n", dp[n][0]);
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}