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
 int n ;
 cin>> n;
 vector<vector<long long>> dp(n,vector<long long>(2,0));
 long long ans=0; 
 for(int i =0;i< n;i++){
   long long x, y;
    cin >> x>> y;
    if(i>0){
      if(x==0){
        dp[i][0] = max(dp[i-1][0],max(dp[i-1][1],dp[i-1][0]) + y);
        dp[i][0] = max(dp[i][0],y);
        dp[i][1] = dp[i-1][1];
      } else {
        dp[i][1] = max(dp[i-1][1],dp[i-1][0]+y);
        dp[i][1] = max(dp[i][1],y);
        dp[i][0] = dp[i-1][0];
      }
    } else {
      if(x==0) dp[0][0] = y;
      else dp[0][1] = y;
    }
    ans = max(ans, max(dp[i][1], dp[i][0]));
 }
 cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
