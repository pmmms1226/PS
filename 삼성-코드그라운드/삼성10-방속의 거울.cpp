//// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
//#include <cstdio>
//#include <iostream>
//using namespace std;
//int arr[1001][1001] , ans ,n;
//bool visit[1001][1001];
//void func(int x, int y , int from) {
//	if (x < 0 || y < 0 || x >= n || y >= n) return;
//	switch (arr[x][y]) {
//	case 0://�ſ����
//		switch (from) {
//		case 0:
//			func(x + 1, y, from);
//			break;
//		case 1:
//			func(x-1, y, from);
//			break;
//		case 2:
//			func(x , y+1, from);
//			break;
//		case 3:
//			func(x, y-1, from);
//			break;
//		}
//		break;
//	case 1://�ſ����
//		if (!visit[x][y]) {
//			ans++;
//			visit[x][y] = 1;
//		}
//		switch (from) {
//		case 0:
//			func(x , y-1, 3);
//			break;
//		case 1:
//			func(x , y+1, 2);
//			break;
//		case 2:
//			func(x-1, y , 1);
//			break;
//		case 3:
//			func(x+1, y , 0);
//			break;
//		}
//		break;
//	case 2://�ſ����
//		if (!visit[x][y]) {
//			ans++;
//			visit[x][y] = 1;
//		}
//		switch (from) {
//		case 0:
//			func(x, y + 1, 2);
//			break;
//		case 1:
//			func(x, y - 1, 3);
//			break;
//		case 2:
//			func(x + 1, y, 0);
//			break;
//		case 3:
//			func(x - 1, y, 1);
//			break;
//		}
//		break;
//	}
//}
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
//		scanf("%d", &n);
//		ans = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				int a;
//				scanf("%1d", &a);
//				arr[i][j] = a;
//				visit[i][j] = false;
//			}
//		}
//		func(0, 0, 2);
//
//		// �� �κп��� ������ ����Ͻʽÿ�.
//		printf("Case #%d\n", test_case);	// cout ��� ����
//		printf("%d\n", ans);
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}