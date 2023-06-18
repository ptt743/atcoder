#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
using namespace std;

void solve(){
  std::ios_base::sync_with_stdio(false);
  std::cout.tie(nullptr);
  std::cin.tie(nullptr);
	int n , m;
  cin>> n>> m;
  vector<bool> visited(n+1, false);
  function<bool(int)> dfs = [&](int u){
    if(u==n)
      return true;
    visited[u] = true;
    int k;
    cin>> k;
    std::vector<int> neighbours(k);
    for (auto &v : neighbours)
      std::cin >> v;

    for(auto item : neighbours){
      if(visited[item]) continue;
        cout<<item<<endl;
        if(dfs(item)) return true;
        cout<< u<<endl;
        for( int i =0, vx;i<=k;++i) cin>> vx;
      
    }
    return false;
  };
  dfs(1);
}
 
int main() {
    solve();
    return 0;
}
