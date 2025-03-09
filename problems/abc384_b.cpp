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
	map<int, pair<int,int>> mp;
	mp[1] = {1600, 2799};
	mp[2] = {1200, 2399};
	int n, r;
	cin>> n >> r;
	for(int i =0;i< n;i++){
		int d,a;
		cin>> d >> a;
		if(r>=mp[d].first && r <= mp[d].second)
			r+=a;
	}
	cout<< r<<endl;
}
 
int main() {
    solve();
    return 0;
}
