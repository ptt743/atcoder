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
	vector<vector<pair<int,int>>> adj(n +1, vector<pair<int,int>>());
	for(int i =0;i< m;i++){
		int a,b, c;
		cin>> a>>b>> c;
		adj[a].push_back(make_pair(b,c));
		adj[b].push_back(make_pair(a,c));
	}
	vector<bool> visited(n+1);
	int ans = 0;
	function<void(int, int)> dfs = [&](int s, int sum ) -> void{
		visited[s] = true;
		ans = max(ans,sum);
		for(int i =0;i< adj[s].size();i++){
			int u = adj[s][i].first;
			int v = adj[s][i].second;
			if(visited[u]==false){
				dfs(u, sum +v);
			}
		}
		visited[s] = false;
	};
	for(int i =1;i<=n;i++) {
		dfs(i,0);}
	cout<< ans<<endl;

}
 
int main() {
    solve();
    return 0;
}
