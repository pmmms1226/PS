///*
//인접 리스트
//시간: O(V+E)
//공간: O(V+E)
//*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdio>
//#include<queue>
//#include<stack>
//
//using namespace std;
//
//
//int N;
//char tree[30][2];
//void pre(char root) {
//	if (root == '.') return;
//	printf("%c", root);
//	pre(tree[root - 'A'][0]);
//	pre(tree[root - 'A'][1]);
//}
//void in(char root) {
//	if (root == '.') return;
//	in(tree[root - 'A'][0]);
//	printf("%c", root);
//	in(tree[root - 'A'][1]);
//}
//void post(char root) {
//	if (root == '.') return;
//	post(tree[root - 'A'][0]);
//	post(tree[root - 'A'][1]);
//	printf("%c", root);
//
//}
//int main() {
//#ifdef _CONSOLE
//	freopen("input.txt", "r", stdin);
//#endif
//	scanf("%d", &N);
//	char a, b, c;
//	for (int i = 1; i <= N; i++) {
//		cin >> a >> b >> c;
//		tree[a - 'A'][0] = b;
//		tree[a - 'A'][1] = c;
//	}
//	pre('A');
//	printf("\n");
//	in('A');
//	printf("\n");
//	post('A');
//	return 0;
//}