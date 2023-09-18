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
	vector<bool> visited(n+1);
	vector<vector<pair<int,pair<long long,long long>>>> adj(n+1,vector<pair<int,pair<long long,long long>>>());
	for(int i =0;i< m;i++){
		int a,b;
		long long x,y;
		cin >> a >> b >> x >> y;
		adj[a].push_back(make_pair(b,make_pair(x,y)));
		adj[b].push_back(make_pair(a,make_pair(-x,-y)));
	}
	vector<pair<long long,long long>> ans(n+1);
	function<void(int,long long,long long)> dfs = [&](int u, long long x, long long y)-> void{
		visited[u] = true;
		ans[u] = make_pair(x,y);
		for(int i =0;i< adj[u].size();i++){
			if(visited[adj[u][i].first]== false){
				long long v1 = adj[u][i].second.first;
				long long v = adj[u][i].second.second;
				dfs(adj[u][i].first,x+v1,y+v);
			}
		}
	};
	dfs(1,0,0);
	for(int i =1;i<=n;i++) 
		if(visited[i])cout<< ans[i].first<<" "<< ans[i].second<< endl;
		else cout<< "undecidable"<< endl;
}	
 
int main() {
    solve();
    return 0;
}
