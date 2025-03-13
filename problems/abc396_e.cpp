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
	vector<vector<pair<int, int >>> adj(n+1, vector<pair<int, int>>());
	for(int i =0;i< m;i++){
		int a,b;
		int c;
		cin>> a >> b >> c;
		adj[a].push_back(make_pair(b,c));
		adj[b].push_back(make_pair(a,c));
	}
	vector<bool> visited(n+1, false);
	vector<int> val(n+1, 0);
	function<vector<int>(int)> bfs=[&](int u){
		queue<int> st;
		visited[u] = true;
		val[u] = 0;
		vector<int> conn;
		conn.push_back(u);
		st.push(u);	
		while(!st.empty()){
			int front = st.front();
			st.pop();
			for(int i = 0 ;i< adj[front].size();i++){
				int v = adj[front][i].first;
				int z = adj[front][i].second;
				if(!visited[v]){
					visited[v] = true;
					st.push(v);
					val[v] = z ^ val[front];
					conn.push_back(v);
				} else if((val[front] ^ val[v])!= z){
					cout<<"-1"<<endl;
					exit(0);
				}
			}
		}
		return conn;
	};
	vector<int> ans(n+1, 0);
	for(int i =1;i<=n;i++){
		if(!visited[i]){
			vector<int> conn = bfs(i);
			for(int j =0;j<30;j++){
				int count  = 0;
				for(int index : conn){
					if(val[index] & (1<< j)) count++;
				}
				if(count < conn.size() - count){
					for(int index: conn){
						if(val[index] & (1<<j)) ans[index] |= (1<<j);
					}
				} else {
					for(int index: conn){
						if(!(val[index] & (1<<j))) ans[index] |=(1<<j);
					}
				}
			}
		}
	}
	for(int i =1;i<=n;i++) cout<< ans[i]<<" ";
	cout<< endl;
}
 
int main() {
    solve();
    return 0;
}
