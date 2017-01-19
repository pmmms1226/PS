///*
//	인접행렬
//	시간: o(V^2)
//	공간: o(V^2)
//*/
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//#include<queue>
//#include<string>
//
//
//using namespace std;
//deque <int> first, second;
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	int t;
//	string s;
//	scanf("%d", &t);
//	while (t--) {
//		cin >> s;
//		int str_size = s.size();
//		for (int i = 0; i < str_size; i++) {
//			switch (s[i]) {
//			case '<':
//				if (first.empty()) continue;
//				second.push_front(first.back());
//				first.pop_back();
//				break;
//			case '>':
//				if (second.empty()) continue;
//				first.push_back(second.front());
//				second.pop_front();
//				break;
//			case '-':
//				if (first.empty()) continue;
//				first.pop_back();
//				break;
//			default:
//				first.push_back(s[i]);
//				break;
//			}
//		}
//		while (!first.empty()) {
//			printf("%c", first.front());
//			first.pop_front();
//		}
//		while (!second.empty()) {
//			printf("%c", second.front());
//			second.pop_front();
//		}
//		printf("\n");
//	}
//	return 0;
//}