#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <climits>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n,s,m,l;
	cin>> n >> s >> m >>l;
	int result = INT_MAX;
	function<void(int,int)> dfs = [&](int sum, int money)-> void {
		if(sum >= n ){
			result = min(result, money); 
			return;
			
		}
		dfs(sum + 6, money + s);
		dfs(sum + 8, money + m);
		dfs(sum + 12,money + l);
	};
	dfs(0,0);
	cout<< result<<endl;
}
 
int main() {
    solve();
    return 0;
}
