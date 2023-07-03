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
	int n,d;
  cin>> n>>d;
  vector<bool> visited(n);
  vector<pair<int,int>> a;
  for(int i =0;i< n;i++){
    int x, y;
    cin>> x>>y;
    a.push_back(make_pair(x,y));
  }
  visited[0] = true;
  queue<int> qq;
  qq.push(0);
  while(!qq.empty()){
    int top = qq.front();
    qq.pop();
    for(int i =0;i< n;i++){
      int dis = (a[top].first- a[i].first)* (a[top].first - a[i].first) + (a[top].second- a[i].second)* (a[top].second- a[i].second);
      if(dis<=(d*d) && visited[i]==false){
        qq.push(i);
        visited[i] = true;
      }
    }
  }
  for(int i =0;i< n;i++) {
    if(visited[i]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}
 
int main() {
    solve();
    return 0;
}
