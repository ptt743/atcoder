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
	int n,m;
	cin >> n >> m;
	vector<vector<pair<int,long long>>> adj(n+1, vector<pair<int, long long>>());
	for(int i =0;i< m;i++){
		int a,b;
		long long c;
		cin>> a >> b >> c;
		adj[a].push_back(make_pair(b,c));
		adj[b].push_back(make_pair(a,c));
	}
	vector<bool> visited(n+1, false);
	long long result = (1ll<<60);
	function<void(int, long long)> dfs=[&](int u, long long val){
		if(u == n) result = min(result, val); 
		visited[u] = true;
		for(int i =0;i< adj[u].size();i++){
			int v = adj[u][i].first;
			long long res = adj[u][i].second;
			if(!visited[v]){
				dfs(v, val ^ res);
			}
		}
		visited[u] = false;
	};
	dfs(1,0ll);
	cout<< result<<endl;
}
 
int main() {
    solve();
    return 0;
}
