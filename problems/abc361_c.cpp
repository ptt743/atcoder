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
	int n ,k; 
	cin>> n >> k;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	long long minVal = 1e9;
	for(int i =0;i<=k;i++){
		minVal = min(minVal, a[i+n-k-1] - a[i]);
	}

	cout<< minVal<<endl;
}
 
int main() {
    solve();
    return 0;
}
