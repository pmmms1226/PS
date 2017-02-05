#include<iostream>
#include<string>
#include<cstdio>
#include<stack>
#include<cmath>
#include<vector>
using namespace std;
#define mod 1000000007
int N , arr[21] ;
bool c[21];
long long k;
int cmd;
long long dp[21];
int main() {
#ifdef _CONSOLE
	freopen("input.txt", "r", stdin);
#endif
	scanf("%d", &N);
	scanf("%d", &cmd);
	dp[1] = 1;
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] * i;
	}
	if (cmd == 1) {
		scanf("%lld", &k);
		vector <int> v;
		for (int i = N - 1; i >= 0; i--) {
			for (int j = 0; j < N; j++) {
				if (j*dp[i] < k && (j + 1)*dp[i] >= k) {
					int cnt = 0;
					for (int k = 1; k <= N; k++) {
						if (c[k] == true) continue;
						if (j == cnt) {
							v.push_back(k);
							c[k] = true;
							break;
						}
						cnt++;
					}
					k -= j*dp[i];
				}
			}
		}
		for (int i = 1; i <= N; i++) {
			if (c[i] == false) {
				v.push_back(i);
				break;
			}
		}
		for (int i = 0; i < v.size(); i++) {
			printf("%d ", v[i]);
		}
	}
	else {
		long long result=0;
		for (int i = 1; i <=N; i++) {
			scanf("%d", &arr[i]);
		}
		for (int i = 1; i <= N; i++) {
			int cnt = 0;
			for (int j = i + 1; j <= N; j++) {
				if (arr[i] > arr[j]) cnt++;
			}
			result += dp[N - i] * cnt;
		}
		printf("%lld", result+1);
	}
	return 0;
}