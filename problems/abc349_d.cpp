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
#define ull unsigned long long

void solve(){
	ull L,R;
	cin>> L >> R;
	vector<pair<ull,ull>> result;
	function<void(ull, ull, ull , ull)> RC = [&](ull l, ull r, ull L, ull R) -> void {
		if( l >= L && r <= R){
			result.push_back(make_pair(l,r));
			return;
		}
		ull mid = (l +r)/2;
		if(mid >= R) {
			RC(l,mid, L,R);
			return;
		}
		if(mid <= L){
			RC(mid, r, L,R);
			return;
		}
		RC(l,mid, L,R);
		RC(mid, r, L,R);
	};
	
	RC(0,1ll<<60,L,R);
	cout<< result.size()<<endl;
	for(int i =0;i< result.size();i++){
		cout<< result[i].first <<" "<<result[i].second <<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
