//// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
//#include <cstdio>
//#include <iostream>
//#include<cstring>
//using namespace std;
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
//	scanf("%d", &TC);	// cin ��� ����
//	for (test_case = 1; test_case <= TC; test_case++) {
//		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�.
//		int n, k;
//		scanf("%d %d", &n, &k);
//		char s[300001];
//		long long ans = 1;
//		scanf("%s", s);
//		int size = strlen(s);
//		int x = 1, y = 1;
//		for (int i = 0; i < size; i++) {
//			if (s[i] == 'U') {
//				if (x - 1 < 1) continue;
//				x--;
//			}
//			else if (s[i] == 'D') {
//				if (x + 1 > n) continue;
//				x++;
//			}
//			else if (s[i] == 'L') {
//				if (y - 1 < 1) continue;
//				y--;
//			}
//			else if (s[i] == 'R') {
//				if (y + 1 > n) continue;
//				y++;
//			}
//			int num = x + y - 1;
//			long long sum = 0;
//			if (num & 1) {
//				sum = ((num - 1)*num) / 2 + 1;
//				if (n < num) {
//					if(n<num-1)sum = sum - (num-1 - n)*(2 * 2 + (num-2 - n) * 2) / 2;
//					sum += n - x;
//				}
//				else {
//					sum += num - x;
//				}
//			}
//			else {
//				sum = (num*(num+1))/2;
//				if (n < num) {
//					sum = sum - (num - n)*(2 * 2 + (num - n-1) * 2) / 2;
//					sum -= n - x;
//				}
//				else
//				sum -= num - x;
//			}
//			ans += sum;
//			//cout <<sum<<' '<< ans << endl;
//		}
//		// �� �κп��� ������ ����Ͻʽÿ�.
//		printf("Case #%d\n", test_case);	// cout ��� ����
//		printf("%lld\n", ans);
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}