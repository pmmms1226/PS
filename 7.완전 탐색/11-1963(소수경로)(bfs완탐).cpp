/*
	BFS
	©ое╫
*/
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#include<cmath>
//#include<string>
//using namespace std;
//int arr[10001] , visit[10001] ,a , b, ans;
//queue <pair <string, int>> q;
//void bfs(int idx) {
//	while (!q.empty()) {
//		q.pop();
//	}
//	for (int i = 0; i < 10001; i++) {
//		visit[i] = 0;
//	}
//	q.push(make_pair(to_string(idx) , 0));
//	while (!q.empty()) {
//		string cur = q.front().first; int cnt = q.front().second;
//		q.pop();
//	//	printf("%d\n", cur);
//		if (stoi(cur) == b) {
//			ans = cnt;
//			return;
//		}
//	/*	for (int i = 1001; i < 10000; i++) {
//			if (arr[i] == 1 &&  visit[i] == 0) {
//				int aa = cur, bb = i, counter = 0;
//				for (int j = 0; j < 4; j++) {
//					if (aa % 10 == bb % 10) counter++;
//					aa = aa / 10;
//					bb = bb / 10;
//				}
//				if (counter == 3) q.push(make_pair(i, cnt + 1));
//			}
//		}*/
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 10; j++) {
//				string temp = cur;
//				temp[i] = j + '0';
//				int ttemp = stoi(temp);
//				if (arr[ttemp] == 1 && visit[ttemp] == 0 && ttemp>=1000 && ttemp<=9999) {
//					visit[ttemp] = 1;
//					q.push(make_pair(temp, cnt + 1));
//				}
//			}
//		}
//	}
//
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	for (int i = 2; i < 10001; i++) {
//		if (arr[i] == -1) continue;
//		if (arr[i] == 0) {
//			arr[i] = 1;
//			for (int j = i + i; j < 10001; j += i) {
//				arr[j] = -1;
//			}
//		}
//	}
//	int N;
//	scanf("%d", &N);
//	while (N--) {
//		scanf("%d %d", &a, &b);
//		bfs(a);
//		printf("%d\n", ans);
//	}
//	return 0;
//}