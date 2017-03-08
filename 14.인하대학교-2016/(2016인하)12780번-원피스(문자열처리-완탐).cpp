//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//using namespace std;
//string n, h;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int ans = 0;
//	cin >> n >> h;
//	int sizeN = n.size(), sizeH = h.size();
//	for (int i = 0; i < sizeN; i++) {
//		if (n[i] == h[0]) {
//			bool end = false;
//			for (int j = 1; j < sizeH; j++) {
//				if (n[i + j] != h[j]) {
//					end = true;
//					break;
//				}
//			}
//			if (!end) ans++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}