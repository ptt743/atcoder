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
	vector<vector<int>> graph(n+1, vector<int>());
	for(int i =0;i< n-1;i++){
		int u,v;
		cin>> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	int ans = 0;
	vector<bool> visited(n+1);
	function<int(int)> dfs = [&](int u)-> int{
		visited[u] = true;
		int result =0;
		bool check = false;
		for(int i=0;i< graph[u].size();i++){
			if(!visited[graph[u][i]]){
				check = true;
				result += dfs(graph[u][i]);
			}
		}
		if(!check) return 1;
		return result+1;
	};
	visited[1] = true;
	int sum =0;
	for(int i=0;i<graph[1].size();i++){
		int temp= dfs(graph[1][i]);	
		sum += temp;
		ans = max(ans,temp);
	}
	cout<< sum - ans +1 <<endl;
}
 
int main() {
    solve();
    return 0;
}
