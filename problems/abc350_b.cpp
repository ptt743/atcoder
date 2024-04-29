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
	int n,q; cin>> n  >> q;
	vector<int> t(q);
	vector<bool> teeth(n+1,true);
	for(int i =0;i< q;i++){
		int t; cin>> t;
		teeth[t] = !teeth[t];
	}
	int count = 0;
	for(int i =1;i<=n;i++) count += teeth[i];
	cout<< count<<endl;
}
 
int main() {
    solve();
    return 0;
}
