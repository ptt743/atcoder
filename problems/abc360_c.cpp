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
	int n ; cin>> n;
	vector<int> a(n);
	vector<int> w(n);
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< n;i++) cin>> w[i];
	vector<pair<int,int>> pairs;
	for(int i =0;i< n;i++) pairs.push_back(make_pair(a[i],w[i]));
	function<bool(pair<int,int>, pair<int,int>)> option=[&](pair<int,int>a, pair<int,int> b)->bool{
                if(a.first == b.first) return a.second > b.second;
		return a.first< b.first; 
	};
	sort(pairs.begin(), pairs.end(), option);
	long long ans = 0;
	for(int i =1;i< n;i++){
		if(pairs[i].first==pairs[i-1].first) ans += pairs[i].second;
	}
	cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
