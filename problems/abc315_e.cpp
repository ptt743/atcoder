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
	int n;
	cin>> n;
	vector<vector<int>> g(n+1, vector<int>());
	for(int i =1;i<=n;i++){
		int c;
		cin>> c;
		for(int j =0;j< c;j++) {
			int t; cin>> t;
			g[i].push_back(t);
		}
	}
	vector<bool> visited(n+1);
	function<void(int )> dfs = [&](int u)->void{
		visited[u] = true;
		for(int item: g[u]){
			if(visited[item]==false){
				dfs(item);
			}
		}
		if(u==1) return;
		cout<< u<<" ";
	};
	dfs(1);
	cout<<endl;

}
 
int main() {
    solve();
    return 0;
}
