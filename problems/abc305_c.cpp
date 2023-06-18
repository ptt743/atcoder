#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<climits>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int h,w;
  cin>> h>> w;
  int a = INT_MAX,b = INT_MIN,c = INT_MAX,d = INT_MIN;
  vector<vector<char>> adj(h+1, vector<char>(w+1));
  for(int i =1;i<=h;i++){
    for( int j =1;j<=w;j++){
      cin>> adj[i][j];
      if(adj[i][j]=='#'){
        a = min(a,i);
        b = max(b,i);
        c = min(c,j);
        d = max(d,j);
      }
    }
  }

  for(int i =1;i<=h;i++){
    for(int j=1;j<=w;j++){
      if(i>=a && i<= b && j>=c && j<= d && adj[i][j]!='#'){
        cout<<i<< " "<<j<<endl;
      }
    }
  }
}
 
int main() {
    solve();
    return 0;
}
