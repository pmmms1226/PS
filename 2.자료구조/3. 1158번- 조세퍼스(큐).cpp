#include<iostream>
#include<string>
#include<algorithm>
#include<queue>
#include<deque>
#include<stack>


using namespace std;
deque <int> result ,q;

int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	std::ios::sync_with_stdio(false);
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		q.push_back(i);
	}
	int index = 1;
	while (!q.empty()) {
		if (index == M) {
			result.push_back(q.front());
			q.pop_front();
			index = 1;
			continue;
		}
		q.push_back(q.front());
		q.pop_front();
		index++;
	}
	cout << "<";
	int size = result.size();
	for (int i = 0; i < size; i++) {
		if (i == size - 1) {
			cout << result.front()  ;
		}
		else {
			cout << result.front()<<", ";
			result.pop_front();
		}
	}
	cout << ">"<<"\n";
	return 0;
}