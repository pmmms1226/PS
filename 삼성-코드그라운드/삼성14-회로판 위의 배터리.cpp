//// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
//#include <cstdio>
//#include <iostream>
//#include<cmath>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct A {
//	int x, y;
//};
//A arr[202];
//
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
//		int idx = 0;
//		for (int i = 0; i < n; i++) {
//			scanf("%d %d", &arr[idx].x, &arr[idx].y);
//			arr[idx].x *= 2, arr[idx].y *= 2;
//			idx++;
//			scanf("%d %d", &arr[idx].x, &arr[idx].y);
//			arr[idx].x *= 2, arr[idx].y *= 2;
//			idx++;
//		}
//		int min_x = 987654321, min_y = 987654321;
//		for (int i = 0; i < idx; i++) {
//			for (int j = i + 1; j < idx; j++) {
//				int mid = (arr[i].x + arr[j].x) / 2;
//				int max_x = 0 , k = 0;
//				while (k < idx) {
//					int tmp = min(abs(arr[k].x - mid), abs(arr[k+1].x - mid));
//					k++;
//					if (max_x < tmp) max_x = tmp;
//					k++;
//				}
//				if (min_x > max_x) min_x = max_x;
//			}
//		}
//		for (int i = 0; i < idx; i++) {
//			for (int j = i + 1; j < idx; j++) {
//				int mid = (arr[i].y + arr[j].y) / 2;
//				int max_y = 0, k = 0;
//				while (k < idx) {
//					int tmp = min(abs(arr[k].y - mid), abs(arr[k+1].y - mid));
//					k++;
//					if (max_y < tmp) max_y = tmp;
//					k++;
//				}
//				if (min_y > max_y) min_y = max_y;
//			}
//		}
//
//		int ans = max(min_x, min_y);
//		// �� �κп��� ������ ����Ͻʽÿ�.
//		printf("Case #%d\n", test_case);	// cout ��� ����
//		if (ans % 2 == 0) printf("%d\n", ans/2);
//		else printf("%d.5\n", ans/2);
//
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}