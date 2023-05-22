#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<set>
using namespace std;
using namespace atcoder;
//*****taipt*****//

void solve(){
	int n,q;
  cin>>n>>q;
  vector<set<int>> ct(n+1);
  int num_connect = 0;
  
  while(q--){
    int type;
    cin>>type;
    if(type==1){
      int u,v;
      cin>>u>>v;
      num_connect += (!ct[u].size()) + (!ct[v].size());
      ct[u].insert(v);
      ct[v].insert(u);
      cout<<(n - num_connect)<<endl;
    } else {
      int u;
      cin>> u;
      if(ct[u].size()) num_connect--;
      for(int v: ct[u]){
        ct[v].erase(u);
        if(ct[v].size()==0) num_connect--;
      }
      ct[u].clear();
      cout<<n-num_connect<<endl;
    }
  }
}
 
int main() {
    solve();
    return 0;
}
