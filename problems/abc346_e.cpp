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
#define rep(i, n) for (ll i = 0; i < (n); i++)

using ll = long long;


void solve(){
    ll h, w, m;
    cin >> h >> w >> m;
    ll wc = w, hc = h;
    vector<bool> visitedh(h,false), visitedw(w,false);
    vector<int> f(m), a(m), x(m);
    for(int i =0;i< m;i++){
	cin>> f[i] >> a[i] >> x[i];
	a[i]--;
    }
    int X = 2e5+10;
    vector<ll> counter(X,0);
    for(int i = m-1;i>=0;i--){
	if(f[i]==1){
		if(!visitedh[a[i]]){
			counter[x[i]]+= wc;
			visitedh[a[i]]= true;
			hc--;
		}
	} else {
		if(!visitedw[a[i]]){
			counter[x[i]]+=hc;
			visitedw[a[i]]= true;
			wc--;
		}
	}
    }
    counter[0] += hc*wc;
    vector<pair<int,ll>> result;
    for(int i =0;i<X;i++){
	if(counter[i]>0) result.push_back(make_pair(i, counter[i]));
    }
    cout<< result.size()<<endl;
    for(int i =0;i< result.size();i++){
	cout<< result[i].first<<" "<<result[i].second<<endl;
    }
}
 
int main() {
    solve();
    return 0;
}
