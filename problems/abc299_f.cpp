#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include <cstring>
using namespace std;
using namespace atcoder;
using mint = modint998244353;
#define MOD 998244353

//*****taipt*****//

int a[100];
int dp[101][101][101];
int inx[26][101];
int dfs(int s, int i, int j){
  if(dp[s][i][j]!=-1) return dp[s][i][j];
  if(s>i)return 1;
  mint r=0;
  for(int k =0;k<26;k++){
    int x = inx[k][s];
    if(x==-1) continue;
    if(x> i) continue;
    int y = inx[k][j];
    if(y==-1) continue;
    r+= dfs(x+1,i,y+1);
  }
  dp[s][i][j]=r.val();
  return dp[s][i][j];
}
void solve(){
	string s;
  cin>> s;
  int n  = s.size();
  for(int i=0;i< n;i++){
    a[i] = s[i]-'a';
  }
  for(int i =0;i<26;i++) inx[i][n]=-1;
  for(int i= n-1;i>=0;i--){
    for( int j =0;j<26;j++ ){
      inx[j][i]=inx[j][i+1];
    }
    inx[a[i]][i]=i;
  }
  memset(dp,0xff,sizeof(dp));
  mint ans = 0;
  for(int i =0;i<n-1;i++){
    ans+=dfs(0,i,i+1);  
  }
  cout<<ans.val()<<endl;
}
 
int main() {
    solve();
    return 0;
}
