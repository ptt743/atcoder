#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<set>
#include<map>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;
vector<int> parent;

int getparent(int u){
  while(u!=parent[u]) u = parent[u];
  return u;
}

void solve(){
	int n,m;
  cin>> n>> m;
  vector<int> rank;
  parent = vector<int>(n+1);
  rank = vector<int>(n+1);
  for(int i =1;i<=n;i++)parent[i] = i;
  for(int i =0;i< m;i++){
    int u,v;
    cin>> u >> v;
    u = getparent(u);
    v = getparent(v);
    if(u!=v){
      if(rank[u]<rank[v]) swap(u,v);
      parent[v] = u;
      if(rank[u]==rank[v]) rank[u]++;
    }
  }
  int k ;
  cin>> k;
  map<int,set<int>> mp;
  for(int i =0;i< k;i++){
    int u, v;
    cin>> u>> v;
    u = getparent(u);
    v = getparent(v);
    mp[u].insert(v);
    mp[v].insert(u);
  }
  int q;
  cin>> q;
  while(q--){
    int u, v;
    cin>> u>> v;
    u = getparent(u);
    v = getparent(v);
    if(mp[u].find(v)!=mp[u].end()) cout<<"No\n";
    else cout<<"Yes\n";
  }
  
}
 
int main() {
    solve();
    return 0;
}
