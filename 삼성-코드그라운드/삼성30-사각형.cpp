//#include <cstdio>
//#include <iostream>
//#include<algorithm>
//#include<cmath>
//
//using namespace std;
//struct A {
//	long long x,y,xx,yy;
//};
//A arr[5001];
//bool compare(const A &a, const A &b) {
//	return (a.xx - a.x)*(a.yy - a.y) > (b.xx - b.x)*(b.yy - b.y);
//}
//int dp[5001];
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
//	scanf("%d", &T);	// Codeground �ý��ۿ����� C++������ scanf �Լ� ����� �����ϸ�, cin�� ����ϼŵ� �˴ϴ�.
//	for (test_case = 1; test_case <= T; test_case++) {
//		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�. �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
//		int n, m, k;
//		scanf("%d %d %d", &n, &m, &k);
//		for (int i = 0; i < k; i++) {
//			long long a, b , c, d;
//			scanf("%lld %lld %lld %lld", &a, &b , &c , &d);
//			arr[i].x = a, arr[i].y = b, arr[i].xx = c, arr[i].yy = d;
//		}
//		sort(arr, arr + k, compare);
//		for (int i = 0; i < k; i++) {
//			dp[i] = 1;
//		}
//		for (int i = 0; i < k; i++) {
//			for (int j = i + 1; j < k; j++) {
//				if (arr[i].x <= arr[j].x && arr[j].xx <= arr[i].xx && arr[i].y <= arr[j].y && arr[j].yy <= arr[i].yy) {
//					dp[j] = max(dp[j], dp[i] + 1);
//				}
//			}
//		}
//		int ans = 0;
//		for (int i = 0; i < k; i++) {
//			if (dp[i] > ans) ans = dp[i];
//		}
//
//
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		printf("%d\n", ans);
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}