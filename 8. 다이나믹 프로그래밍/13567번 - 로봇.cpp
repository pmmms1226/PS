//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int main() {
//	freopen("input.txt", "r", stdin);
//	int m, n;
//	scanf("%d %d", &m, &n);
//	//���� 0 : �� //1: �� //2 : �� //3 : ��
//	int curdi = 0;
//	int x = 0 , y = 0;
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		if (s == "MOVE") {
//			int dist;
//			scanf("%d", &dist);
//			switch (curdi) {
//			case 0:
//				x += dist;
//				if (x < 0 || y < 0 || x> m || y > m) {
//					printf("%d", -1);
//					return 0;
//				}
//				break;
//			case 1:
//				y += dist;
//				if (x < 0 || y < 0 || x> m || y > m) {
//					printf("%d", -1);
//					return 0;
//				}
//				break;
//			case 2:
//				x -= dist;
//				if (x < 0 || y < 0 || x> m || y > m) {
//					printf("%d", -1);
//					return 0;
//				}
//				break;
//			case 3:
//				y -= dist;
//				if (x < 0 || y < 0 || x> m || y > m) {
//					printf("%d", -1);
//					return 0;
//				}
//				break;
//			}
//		}
//		else {
//			int turn;
//			scanf("%d", &turn);
//			if (turn == 0) {//��
//				curdi++;
//				if (curdi >= 4) curdi = 0;
//			}
//			else {//��
//				curdi--;
//				if (curdi < 0) curdi = 3;
//			}
//		}
//	}
//printf("%d %d", x, y);
//	return 0;
//}