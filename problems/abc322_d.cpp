#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<map>
using namespace std;
using namespace atcoder;
//*****taipt*****//
typedef long long ll;
const ll INF = numeric_limits<ll>::max() / 2;
using mint = modint998244353;

void solve(){
	int n,k,p;
	cin>> n >> k>> p;
	vector<long long> c(n+1);
	vector<vector<int>> a(n+1, vector<int>(k,0));
	vector<vector<int>> statuses;
	vector<int> status(k);
	function<void(int)> dfs = [&](int index)-> void {
		if(index== k) {
			statuses.push_back(status);
			return;
		}
		for(int i = 0;i<= p;i++){
			status[index] = i;
			dfs(index +1);
		}
	};
	dfs(0);
	for(int i =1;i<= n;i++){
		cin>> c[i];
		for(int j = 0;j<k;j++) cin>> a[i][j];
	}

	map<vector<int>, int> mp;
	int m  = statuses.size();
	for(int i =0;i< statuses.size();i++) mp[statuses[i]] = i;
	
	vector<vector<long long>> dp(n+1, vector<long long>(m, INF));
	dp[0][0] = 0;
	for(int i =1;i<=n;i++){
		for(int j =0;j<m;j++) dp[i][j] = dp[i-1][j];
		for(int j =0;j< m;j++){
			vector<int> vec(k);
			for(int l =0;l<k;l++) vec[l] = min(p, statuses[j][l] + a[i][l]);
			int _i = mp[vec];
			dp[i][_i] = min(min(dp[i][_i], dp[i-1][_i]), dp[i-1][j] + c[i]);
		}
	}
	long long ans = dp[n][m-1];
        if(ans >= INF) cout << -1 << '\n';
        else cout << ans<< '\n';

}
 
int main() {
    solve();
    return 0;
}
