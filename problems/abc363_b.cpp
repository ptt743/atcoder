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
	int n,t,p;
	cin>> n >> t >> p;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	int temp = t - a[n-p];
	cout<<((temp<0)?0:temp)<<endl;
}
 
int main() {
    solve();
    return 0;
}
