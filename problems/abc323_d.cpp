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
	int n ;
	cin>> n;
	int left = 1, right = n;
	map<long long, long long> mp;
	for(int i =0;i< n;i++) {
		long long s,c;
		cin>> s >> c;
		mp[s] = c;
	}
	for(auto it: mp){
		if(it.second%2!=0){
			mp[it.first] = 1;
		}else {
			mp[it.first] = 0;
		}
			mp[it.first*2]+= it.second/2;
	}
	int ans = 0;
	for(auto it: mp){
	 ans +=it.second;
	}
	cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
