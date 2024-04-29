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
#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(c) (c).begin(), (c).end()
using mint = modint998244353;
int A[3][3];
int B[3][3];


int dfs(int turn, int visited){
  {
    rep(i,3){
      bool flg = true;
      rep(j,3) if(B[i][j] == -1 || B[i][0] != B[i][j]) flg = false;
      if(flg) return B[i][0];
    }
    rep(j,3){
      bool flg = true;
      rep(i,3) if(B[i][j] == -1 || B[0][j] != B[i][j]) flg = false;
      if(flg) return B[0][j];
    }
    if(B[0][0] != -1 && B[0][0] == B[1][1] && B[0][0] == B[2][2]){
      return B[0][0];
    }
    if(B[0][2] != -1 && B[0][2] == B[1][1] && B[0][2] == B[2][0]){
      return B[0][2];
    }
  }
  if(visited == 9){
    ll tsum = 0, asum = 0;
    rep(i,3) rep(j,3){
      if(B[i][j] == 0) tsum += A[i][j];
      else asum += A[i][j];
    }
    if(tsum > asum) return 0;
    else return 1;
  }

  bool ok = false;
  rep(i,3){
    rep(j,3){
      if(B[i][j] != -1) continue;
      B[i][j] = turn;
      if(dfs(1-turn, visited+1) == turn) ok = true;
      B[i][j] = -1;
    }
  }
  if(ok) return turn;
  return 1-turn;
}
void solve(){
  rep(i,3) rep(j,3){
    cin >> A[i][j];
    B[i][j] = -1;
  }
  if(dfs(0, 0) == 0) cout << "Takahashi" << endl;
  else cout << "Aoki" << endl;
}
 
int main() {
    solve();
    return 0;
}
