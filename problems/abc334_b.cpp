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
using ll = long long;

ll floor(ll x, ll m) {
    ll r = (x % m + m) % m;
    return (x - r) / m;
}
void solve(){
	ll a, m, l, r;
   	cin >> a >> m >> l >> r;
    	l -= a, r -= a;
	cout<< floor(r,m)<<" "<<floor(l-1,m)<<endl;
    	cout << floor(r, m) - floor(l - 1, m) << endl;	

}
 
int main() {
    solve();
    return 0;
}
