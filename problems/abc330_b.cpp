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
	long long n,l,r;
	cin>> n >> l >> r;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];

	for(int i =0;i< n;i++){
		if(a[i]>= l && a[i] <=r){
			cout<< a[i]<<" ";
		} else if (a[i]<l) cout<< l<<" ";
		else cout<<r <<" ";
	}
	cout<< endl;
}
 
int main() {
    solve();
    return 0;
}
