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
using ll = long long;

void solve(){
	long long n, a, x, y;
	cin>> n >> a >> x >> y;
	auto memo = unordered_map<ll,lb>();
    	function<lb(ll)> dfs = [&](ll num){
        	if(num==0) return lb(0.0);

        	if(memo.count(num)) return memo[num];
        	lb res = lb(1e18);
		
        	res = min(res,dfs(num/a)+x);
        	res = min(res,(6*y + dfs(num/2) + dfs(num/3) + dfs(num/4) + dfs(num/5) +dfs(num/6)) / 5);

       	 	memo[num] = res;

        	return res;
    	};
    lb ans = dfs(n);
    printf("%.12Lf\n",ans);
}
 
int main() {
    solve();
    return 0;
}
