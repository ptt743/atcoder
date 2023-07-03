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
	int n,m;
  cin>> n>> m;
  vector<vector<pair<int,int>>> adj(n+1, vector<pair<int,int>>());
  vector<int> ans(n+1,-1);
  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> qq,qq2;
  for(int i =0;i< m;i++){
    int x,y,z;
    cin>> x>> y>> z;
    adj[x].push_back(make_pair(z,y));
    adj[y].push_back(make_pair(z,x));
  }
  int k, d;
  cin>> k;
  for(int i =0;i< k;i++){
    int temp; cin>> temp;
    ans[temp] = 0;
    int size  = adj[temp].size();
    for(int j =0;j< size;j++){
      if(ans[adj[temp][j].second]<0) qq.push({adj[temp][j].first,adj[temp][j].second});
    }
  }
  cin>> d;
  for(int i =0;i<d;i++){
    int x;
    cin>> x;
    while(!qq.empty()){
      auto top = qq.top();
      if(top.first>x) break;
      qq.pop();
      if(ans[top.second]>=0) continue;
      qq2.push(top);
    }
    while(!qq2.empty()){
      auto top = qq2.top();
      qq2.pop();
      int y = top.second;
      if(ans[y]>=0) continue;
      ans[y] = i+1;
      int size = adj[y].size();
      for(int j =0;j< size;j++){
        if(ans[adj[y][j].second]<0){
          if(top.first + adj[y][j].first<=x) qq2.push({top.first + adj[y][j].first, adj[y][j].second});
          else {qq.push({adj[y][j].first, adj[y][j].second});}
      }
      }
    }
  }
  for(int i =0;i< n;i++) cout<< ans[i+1]<<endl;
}
 
int main() {
    solve();
    return 0;
}
