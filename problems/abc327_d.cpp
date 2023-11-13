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
	cin>> n >>m;
	vector<int> a(m),b(m);
	for(int i =0;i< m;i++) cin>> a[i];
	for(int i =0;i<m;i++) cin>> b[i];
	vector<int> res(n,-1);
	bool check = true;
	vector<vector<int>> adj(n,vector<int>());
	for(int i =0;i<m;i++){
		int inda = a[i]-1;
		int indb = b[i]-1;
		if(inda==indb){
			check = false;
			break;
		}
		adj[inda].push_back(indb);
		adj[indb].push_back(inda);
	}
	vector<bool> visited(n);
	function<void(int)> dfs = [&](int u)->void{
		res[u] = 1;
		visited[u] = true;
		queue<int> qq;
		qq.push(u);
		while(!qq.empty()){
			int v = qq.front();
			qq.pop();
			for(int i =0;i<adj[v].size();i++){
				if(!visited[adj[v][i]]){
					visited[adj[v][i]] = true;
					res[adj[v][i]] = 1 - res[v];
					qq.push(adj[v][i]);
				}
			}
		}
	};
	for(int i =0;i<n;i++){
		if(!visited[i]){
			dfs(i);
		}
	}
	for(int i=0;i<m;i++){
		if(res[a[i]-1]  == res[b[i]-1]){
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
}
 
int main() {
    solve();
    return 0;
}
