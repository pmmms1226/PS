//#include <cstdio>
//#include <iostream>
//#include<algorithm>
//#include<queue>
//#include<cmath>
//using namespace std;
//#define INF 987654321
//struct A {
//	int dist;
//	int water;
//};
//int d[2][2] = { { 0,1 } ,{ 1, 0 }  };
//int dp[101][101][11];
//A arr[101][101];
//int n, m, k;
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
//		scanf("%d %d %d", &m, &n, &k);
//		for (int i = 0; i <= n; i++) {
//			for (int j = 0; j <= m; j++) {
//				for (int k = 0; k < 11; k++) {
//					dp[i][j][k] = INF;
//				}
//			}
//		}
//		for (int i = 0; i <= n; i++) {
//			for (int j = 0; j <= m; j++) {
//				int a;
//				scanf("%d", &a);
//				if (a < 0) {
//					arr[i][j].dist = -a, arr[i][j].water = 1;
//				}
//				else arr[i][j].dist = a, arr[i][j].water = 0;
//			}
//		}
//		dp[0][0][0] = 0;
//		for (int i = 0; i <= n; i++) {
//			for (int j = 0; j <= m; j++) {
//				for (int k = 0; k < 2; k++) {
//					int x = i + d[k][0], y = j + d[k][1];
//					if (x > n || y > m) continue;
//					for (int w = 0; w < 11; w++) {
//						if (dp[i][j][w] != INF) {
//							if (w == 10) {
//								int tmp = min(dp[x][y][10], abs(arr[x][y].dist - arr[i][j].dist) + dp[i][j][w]);
//								dp[x][y][10] = tmp;
//							}
//							else {
//								int tmp = min(dp[x][y][w + arr[x][y].water], abs(arr[x][y].dist - arr[i][j].dist) + dp[i][j][w]);
//								dp[x][y][w + arr[x][y].water] = tmp;
//							}
//							
//						}
//					}
//				}
//			}
//		}
//		int ans = INF;
//		for (int i = k; i < 11; i++) {
//			if (ans > dp[n][m][i]) ans = dp[n][m][i];
//		}
//		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
//		printf("Case #%d\n", test_case);
//		printf("%d\n", ans);
//
//	}
//
//	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
//}