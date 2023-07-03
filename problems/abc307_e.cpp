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
	int n, m;
  cin>> n>> m;
  mint dp[2][1000010];
  dp[1][1] = m;
  for(int i =1;i<n;i++){
    dp[0][i+1] += dp[0][i]*(m-2);
    dp[0][i+1] += dp[1][i]*(m-1);
    dp[1][i+1] += dp[0][i]; 
  }
  cout<<dp[0][n].val()<<endl;

}
 
int main() {
    solve();
    return 0;
}
