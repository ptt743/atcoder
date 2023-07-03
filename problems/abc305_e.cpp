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
	int n ,m,k;
  cin>> n>> m>>k;
  vector<set<int>> adj(n+1);
  for(int i =0;i< m;i++){
    int a, b;
    cin>> a>> b;
    adj[a].insert(b);
    adj[b].insert(a);
  }
  priority_queue<pair<int,int>> qq;
  vector<int> d(n+1,-1);
  for(int i =0;i< k;i++){
    int x, h;
    cin>> x>> h;
    d[x] = h;
    qq.push(make_pair(d[x],x));
  }
    while(!qq.empty()){
      pair<int,int> top = qq.top();
      qq.pop();
      int u  = top.first, v = top.second;
      for(int item : adj[v]){
        if(d[item]<u-1){
          d[item] = u-1;
          qq.push(make_pair(u-1, item));
        }
      }
    }
  vector<int> result;
  for(int i =1;i<=n;i++) if(d[i]>=0) result.push_back(i);
  cout<<result.size()<<endl;
  for(int i: result) cout<< i<<" ";
  cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
