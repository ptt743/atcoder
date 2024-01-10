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
	int n,k;
	cin>> n >> k;
	vector<int> a(k);
	for(int i =0;i< k;i++) cin>> a[i];
	vector<int> pre(k+1,0), suf(k+1,0);
	for(int i = 1; i<=k;i++){
		pre[i] = pre[i-1];
		if(i%2==0) pre[i] += a[i-1] - a[i-2];
	}
	for(int i = k-1;i>=0;i--){
		suf[i] = suf[i+1];
		if((k - i)%2==0) suf[i] += a[i+1] - a[i];
	}

	int ans = 1e9;
	for(int i =0;i<=k;i+=2){
		ans = min( ans, suf[i] + pre[i]);
	}
	cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
