#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include <climits>
using ll = long long;
#define int ll

using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;
struct Compare {
    bool operator()(pair<int,int> &a, pair<int,int> &b) {
        return a.first  < b.first; // Dấu ngược lại so với mặc định
    }
};
void solve(){
	priority_queue<pair<int,int>> qq;
	int n, m;
	cin>> n >> m;
	vector<int> a(n+1);
	int index = 0;
	for(int i =1;i<=n ;i++){ 
		cin>> a[i];
	}
	vector<vector<int>> adj(n+1, vector<int>());
	for(int i =0;i< m;i++){
		int x, y;
		cin>> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	qq.emplace(0,1);
	vector<int> d(n+1);
	d[1] = 1;
	int result = 0;
	while(!qq.empty()){
		pair<int,int> top  = qq.top(); qq.pop();
		int v = top.second;
		for(int k : adj[v]){
			int ndv = d[v] + (a[v]< a[k]);
			if(a[k]>= a[v] && ndv > d[k] ){
				d[k] = ndv ;
				qq.emplace(-a[k], k);
			}
		}
	}
	cout<<d[n]<< endl;
	
}
 
signed main() {
    solve();
    return 0;
}
