#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int t, x;
		cin >> t >> x;
		if (t == 1) {
			type[i] = 1;
			pre[i] = latest[x];
			latest[x] = i;
		} else {
			if (latest[x]) {
				used[latest[x]] = 1;
				latest[x] = pre[latest[x]];
			} else {
				cout << -1;
				return 0;
			}
		}
//		cout << latest[x] << " " << pre[i] << endl;
	}
	int pack = 0, ans = 0;
	for (int i = 1; i <= n; i++) {
		if (type[i] && used[i]) pack++;
		else if (!type[i]) pack--;
		ans = max(ans, pack);
	}
	cout << ans << endl;
	for (int i = 1; i <= n; i++) {
		if (type[i]) cout << used[i] << " ";
	}
}
 
int main() {
    solve();
    return 0;
}
