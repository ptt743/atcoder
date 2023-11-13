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
	int n,x;
	cin>> n >> x;
	int sum =0;
	for(int i =0;i<n;i++) {
		int t; cin>> t;
		if(t<=x)
			sum+=t;
	}
	cout<< sum<<endl;
}
 
int main() {
    solve();
    return 0;
}
