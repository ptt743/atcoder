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
	int n;
	long long m;
	cin>> n >> m;
	vector<long long> a(n);
	for(int i=0;i< n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	int ans = 0;
	for(int i =0;i< n;i++){
		int index = lower_bound(a.begin(), a.end(), a[i] + m) - a.begin();
		ans = max(ans, index - i);
	}
	cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
