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
	int n ;
	cin>> n;
	vector<int> a(n);
	unordered_map<int,int> mp;
	for(int i =0;i< n;i++){
		int ind;
		cin>> ind;
		mp[ind] =  i+1;
	}
	int q; cin>> q;
	while(q--){
		int a, b;
		cin>> a >> b;
		if(mp[a]<mp[b]) cout<< a<< endl;
		else cout<< b<< endl;
	}
}
 
int main() {
    solve();
    return 0;
}
