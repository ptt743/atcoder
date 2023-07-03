#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int h, w;
  cin>> h>> w;
  vector<string> adj(h);
  for(int i =0;i< h;i++){
    cin>> adj[i];
  }
  int dx[] = {0,0,1,-1};
  int dy[] = {1,-1,0,0};
  vector<vector<bool>> visited(h,vector<bool>(w,false));
  map<char,char> mp = {{'e','s'},{'s','n'}, {'n','u'},{'u','k'},{'k','e'}};
  function<bool(char,int,int)> dfs = [&](char c, int x, int y)-> bool {
    if(x==h-1 && y ==w-1 && adj[x][y] == mp[c]) return true;
    if(adj[x][y]!=mp[c]) return false;
    visited[x][y] = true;
    bool check = false;
    for(int i =0;i<4;i++){
        int u  = x + dx[i];
        int v = y + dy[i];
        if((u>=0 && u<h) && (v>=0 && v<w)&& !visited[u][v]){
          check|=dfs(adj[x][y], u,v);
        }
    }
    return check;
  };
  cout<< (dfs('e',0,0)?"Yes":"No")<<endl;
}
 
int main() {
    solve();
    return 0;
}
