//#include <cstdio>
//#include <iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//long long dp[501][501], dp2[501][501];//dp�� start~end���� �Ѱ�, dp2�� start~N���� m��
//int arr[501];
//long long sum[501];
//int n;
//long long func(int start, int m) {
//	long long &ret = dp2[start][m];
//	if (ret != -1) return ret;
//	if ((n - start + 1) <= m) return 0;
//	if (m == 1) {
//		return ret= dp[start][n];
//	}
//	long long min = 1e9;
//	for (int i = start; i <= n; i++) {
//		long long tmp = dp[start][i] + func(i+1,  m-1);
//		if (min > tmp) min = tmp;
//	}
//	return ret = min;
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
//		int  m;
//		scanf("%d %d", &n, &m);
//		for (int i = 1; i <= n; i++) {
//			scanf("%d", &arr[i]);
//		}
//		sort(arr + 1, arr + n + 1);
//		for (int i = 1; i <= n; i++) {
//			sum[i] = sum[i - 1] + arr[i];
//		}
//		for (int i = 1; i <= n; i++) {
//			for (int j = i+1; j <= n; j++) {
//				int mid = (i + j) / 2 , l = mid-i+1 , r = j-mid;
//				long long Ltmp = arr[mid] * l-(sum[mid] - sum[i - 1]) ;
//				long long Rtmp = (sum[j] - sum[mid]) - arr[mid] * r;
//				dp[i][j] = Ltmp + Rtmp;
//			}
//		}
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				dp2[i][j] = -1;
//			}
//		}
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		printf("%lld\n", func(1,  m));
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}