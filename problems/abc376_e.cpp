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
	int n,k;
	cin>> n >> k;
	vector<int>a(n+1);
	vector<int> b(n+1);
	vector<pair<int,int>> dp(n+1);
	dp[0] = make_pair(0,0);
	for(int i =1;i<=n;i++){
		dp[i] = dp[i-1];
		int cal = dp[i].first * dp[i].second;

	}
}
 
int main() {
    solve();
    return 0;
}
