//// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
//#include <cstdio>
//#include <iostream>
//#include <cmath>
//using namespace std;
//#define pi 3.1415926535
//int dart[21] = { 6,13,4,18,1,20,5,12,9,14,11,8,16,7,19,3,17,2,15,10 ,6};
//int check(int x, int y) {
//	if (x == 0 && y >= 0) return 20;
//	else if (x == 0 && y <= 0) return 3;
//	if (y == 0 && x >= 0) return 6;
//	else if (y == 0 && x <= 0) return 11;
//	double tmp = atan2(y, x) * (double)180 / pi + 9;
//	if (tmp < 0) tmp += 360;
//	return dart[(int)tmp / 18];
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
//	setbuf(stdout, NULL);
//
//	int TC;
//	int test_case;
//
//	scanf("%d", &TC);	// cin ��� ����
//	for (test_case = 1; test_case <= TC; test_case++) {
//		// �� �κп��� �˰��� ���α׷��� �ۼ��Ͻʽÿ�.
//		int A, B, C, D, E , n;
//		scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
//		scanf("%d", &n);
//		int sum = 0;
//		for (int i = 0; i < n; i++) {
//			double x, y;
//			scanf("%lf %lf", &x, &y);
//			double dir = x*x + y*y;
//			if (dir < A*A) {
//				sum += 50;
//			}
//			else if (A*A < dir &&  dir < B*B) {
//				sum += check(x,y);
//			}
//			else if (B*B < dir && dir < C*C) {
//				sum += check(x, y)*3;
//			}
//			else if (C*C < dir && dir < D*D) {
//				sum += check(x, y);
//			}
//			else if (D*D < dir && dir < E*E) {
//				sum += check(x, y)*2;
//			}
//		}
//		
//		// �� �κп��� ������ ����Ͻʽÿ�.
//		printf("Case #%d\n", test_case);	// cout ��� ����
//		printf("%d\n", sum);
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}