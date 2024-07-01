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
	int n ; cin>> n;
	map<pair<long long, long long>, int> mp;
	vector<pair<int,int>> a;
	for(int i = 0;i< n;i++){
		long long x, y; cin>> x >> y;
		mp[make_pair(y,x)] = i+1;
		a.push_back(make_pair(y, x));
	}
	sort(a.begin(),a.end());
	int max_value = -1;
	for(int i =0;i<n;i++){
		max_value = max(max_value, a[i].second);
		if(a[i].second<max_value) mp[make_pair(a[i].first , a[i].second)] = -1;
	}
	vector<int> result;
	for(auto el: mp){
		if(el.second!=-1) result.push_back(el.second);
	}
	cout<< result.size()<<endl;
	sort(result.begin(), result.end());
	for(auto el: result) cout<< el<<" ";
	cout<<endl;
	
	
}
 
int main() {
    solve();
    return 0;
}
