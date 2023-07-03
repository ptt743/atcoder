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
  long long x,y,z;
  cin>>x>>y>>z;
  string s;
  cin>> s;
  int n  = s.size();
  s =" " +s;
  vector<vector<long long>> dp(n+1, vector<long long>(2));
  dp[0][0] = 0; 
  dp[0][1] = z;
  for(int i =1;i<=n;i++){
	  dp[i][0] = 1e18;
	  dp[i][1] = 1e18;
	if(s[i]=='a'){
	 dp[i][0] = min(dp[i][0],dp[i-1][0] + x);
	 dp[i][0] = min(dp[i][0], dp[i-1][0] + z+ y+ z);
	 dp[i][0] = min(dp[i][0], dp[i-1][1] + z + y);
	 dp[i][0] = min(dp[i][0], dp[i-1][1] + x + z);
	 dp[i][1] = min(dp[i][1], dp[i-1][1] + y);
	 dp[i][1] = min(dp[i][1], dp[i-1][1] + z + x + z);
	 dp[i][1] = min(dp[i][1], dp[i-1][0] + z + y);
	 dp[i][1] = min(dp[i][1], dp[i-1][0] + z + x);
	} else {
	 dp[i][0] = min(dp[i][0], dp[i-1][0] + y);
	 dp[i][0] = min(dp[i][0], dp[i-1][1] + z + y);
	 dp[i][0] = min(dp[i][0], dp[i-1][1] + x + z);
	 dp[i][0] = min(dp[i][0], dp[i-1][0] + z + x + z);
	 dp[i][1] = min(dp[i][1], dp[i-1][0] + z + x);
	 dp[i][1] = min(dp[i][1], dp[i-1][0] + z + y);
	 dp[i][1] = min(dp[i][1], dp[i-1][1] + x);
	 dp[i][1] = min(dp[i][1], dp[i-1][1] + z+ y+ z);
	 
	}
  }
	cout<<min(dp[n][0], dp[n][1])<<endl;
}
 
int main() {
    solve();
    return 0;
}
