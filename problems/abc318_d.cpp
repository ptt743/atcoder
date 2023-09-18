#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n;
	cin>> n;
	vector<vector<int>> adj(n, vector<int>(n,0));
	
	for(int i =0;i< n;i++){
		for(int j = i+1; j<n;j++){
			cin>> adj[i][j];
		}
	}
	vector<long long> dp((1<<n), 0ll);
	for(int i =0;i< (1<<n)-1; i++){
		int l = -1;
		for(int j =0;j< n;j++){
			if(!((i>>j)&1)){
				l = j;
				break;
			} 
		}
		for(int j = 0;j<n;j++){
			if(!((i>>j)&1)){
				int t  = i | 1<<l | 1<<j;
				dp[t] = max(dp[t], dp[i] + adj[l][j]);
			}
		}
	}
	cout<< dp.back()<<endl;
}
 
int main() {
    solve();
    return 0;
}
