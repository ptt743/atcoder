// Problem: F - Merge Set
// Contest: AtCoder - TOYOTA MOTOR CORPORATION Programming Contest 2023#2 (AtCoder Beginner Contest 302)
// URL: https://atcoder.jp/contests/abc302/tasks/abc302_f
// Memory Limit: 1024 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define pb emplace_back
#define fst first
#define scd second
#define mems(a, x) memset((a), (x), sizeof(a))

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;
typedef pair<int, int> pii;

const int maxn = 1000100;

int n, m, f[maxn];
vector<pii> G[maxn];

void solve() {
	scanf("%d%d", &n, &m);
	mems(f, 0x3f);
	for (int i = 1, t, x; i <= n; ++i) {
		scanf("%d", &t);
		while (t--) {
			scanf("%d", &x);
			G[i].pb(x + n, 0);
			G[x + n].pb(i, 1);
		}
	}
	f[n + 1] = 0;
	deque<int> q;
	q.pb(n + 1);
	while (q.size()) {
		int u = q.front();
		q.pop_front();
		for (pii p : G[u]) {
			int v = p.fst, d = p.scd;
			if (f[v] <= f[u] + d) {
				continue;
			}
			f[v] = f[u] + d;
			q.pb(v);
	}
	printf("%d\n", f[n + m] > 1e9 ? -1 : f[n + m] - 1);
}

int main() {
	int T = 1;
	// scanf("%d", &T);
	while (T--) {
		solve();
	}
	return 0;
}

