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
	int n,m; cin>> n >> m;
	vector<pair<int,int>> us(n+1);
	for(int i = 1;i<=n;i++) us[i] = make_pair(i,0);
	vector<int> siz(n+1,1);
	function<int(int)> find=[&](int u)-> int{
		while(u!=us[u].first){
			u = us[u].first;
		}
		return u;
	};
	function<void(int,int)> unique=[&](int u, int v)-> void{
		int pu = find(u);
		int pv = find(v);
		if(pu!=pv){
			if(siz[pv]>siz[pu]) swap(pv,pu);
			us[pv].first = pu;
			us[pu].second += us[pv].second +1;
			siz[pu]+=siz[pv];
		} else us[pu].second++;
	};
	for(int i =1;i<=m;i++){
		int x,y; cin>> x >>y;
		unique(x,y);	
	}
	vector<bool> visited(n+1, false);
	long long ans = 0;
	for(int i =1;i<=n;i++){
		int pi = find(i);
		if(!visited[pi]){
			ans += (long long)siz[pi]*(siz[pi]-1)/2 - us[pi].second;
			visited[pi] = true;
		}
	}
	cout<< ans<<endl;
	
}
 
int main() {
    solve();
    return 0;
}
