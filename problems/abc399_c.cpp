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
	int n,m; cin>> n >> m;
	vector<int> parent(n+1,0), rank(n+1,1);
	iota(parent.begin(), parent.end(),0);


	function<int(int)> find = [&](int u) {
        	if (u != parent[u]) 
            		parent[u] = find(parent[u]);
        	return parent[u];
    	};
	function<bool(int,int)> unite=[&](int u, int v) {
        	int pu = find(u), pv = find(v);
       	 	if (pu == pv) return false;

        	if (rank[pu] < rank[pv]) swap(pu, pv);
        	parent[pv] = pu;
        	if (rank[pu] == rank[pv]) rank[pu]++;
        	return true;
   	};
	int k = n;
	for(int i =0;i< m;i++){
		int a, b;
		cin>> a >> b;
		if(find(a)!=find(b)) {
			unite(a,b);
			k--;
		}
	}
	cout<< m - (n - k)<<endl;

	
}
 
int main() {
    solve();
    return 0;
}
