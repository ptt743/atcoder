#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include"atcoder/lazysegtree.hpp"
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;
#define rep(i,n) for(int i =0;i<(n); i++)

struct Data {
	int l[2], r[2], m[2], len;
	Data(){
		rep(t,2) l[t] = 0, r[t]=0, m[t]=0;
		len = 0;
	}
	Data( char c){
		rep(t,2)l[t] = r[t] = m[t] =  (c == t +'0');
		len =1;
	}
	Data flip() {
		Data res = *this;
		swap(res.l[0], res.l[1]);
		swap(res.r[0], res.r[1]);
		swap(res.m[0], res.m[1]);
		return res;
	}
	static Data merge( Data& a, Data& b){
		Data res;
		rep(t,2){
			res.l[t] = a.l[t] + ((a.l[t] == a.len)?b.l[t]:0);
			res.r[t] = b.r[t] + ((b.r[t] == b.len)?a.r[t]:0);
			res.m[t] = max(max(a.m[t], b.m[t]), a.r[t] + b.l[t]);
		}
		res.len = a.len + b.len;
		return res;
	}
};
Data f(Data a, Data b) { return Data::merge(a, b); }
Data g(int a, Data b) { return a ? b.flip() : b; }
int h(int a, int b) { return a ^ b; }
Data ti() { return Data(); }
int ei() { return 0; }

void solve(){
	int N, Q;
	string S;
	cin>> N >> Q >> S;
	vector<Data> init (N);
	rep(t,N)init[t] = Data(S[t]);

	atcoder::lazy_segtree<Data, f, ti, int, g, h, ei> seg(init);
	
	while(Q--){
		int c, l,r;
		cin>> c >> l >> r;
		l--;
		if (c == 1) {
      		seg.apply(l, r, 1);
    		} else {
      			auto ans = seg.prod(l, r);
      			cout << ans.m[1] << endl;
    		}
	}
}
 
int main() {
    solve();
    return 0;
}
