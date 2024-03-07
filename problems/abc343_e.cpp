#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;
typedef unsigned long long ull;

struct SegmentTree {
	vector<pair<ull,ull>> node;
	SegmentTree(int n) : node(4 * n + 12) {}
	void update(int v, int l, int r, int pos, ull val) {
		if (r < pos || l > pos) return;
		if (l == r) {
			node[v] = make_pair(val,val);
		return;
		}
		int m = (l + r) >> 1;
		update(v << 1, l, m, pos, val);
		update(v << 1 | 1, m + 1, r, pos, val);
		set<long long> temp;
		temp.insert(node[v<<1].first);
		temp.insert(node[v<<1].second);
		temp.insert(node[v<<1|1].first);
		temp.insert(node[v<<1|1].second);

		node[v].second = *temp.rbegin();
		temp.erase(*temp.rbegin());
		if(temp.empty()){
			node[v].first = node[v].second;
			return;
		}
		node[v].first = *temp.rbegin();
	}
	pair<ull,ull> get(int v, int l, int r, int tl, int tr) {
		if (r < tl || l > tr) return make_pair(0,0);
		if (tl <= l && r <= tr) return node[v];
		int m = (l + r) >> 1;
		pair<ull,ull> first = get(v << 1, l, m, tl, tr);
		pair<ull,ull> second = get(v << 1 | 1, m + 1, r, tl, tr);
		pair<ull,ull> result;
		set<long long> temp;
		temp.insert(first.first);
		temp.insert(first.second);
		temp.insert(second.first);
		temp.insert(second.second);

		result.second = *temp.rbegin();
		temp.erase(*temp.rbegin());
		if(temp.empty())
			result.first = result.second;
		else result.first = *temp.rbegin();
		return result;

	}
};




void solve(){
	int n,q;
	cin>> n >> q;
	SegmentTree st(n);
	vector<map<long long,int>> mp(n+1);
	for(int i =1;i<= n;i++){
		long long a;cin>> a;
		st.update(1,1,n, i, a);
		mp[i][a]++;
	}
	while(q--){
		int t; long long a, b;
		cin>> t >> a >> b;
		if(t==1) st.update(1,1,n,a,b);
		else{
			pair<ull,ull> value = st.get(1,1,n,a,b);
			if(a==b)
			cout<<value.first<<" "<< value.second <<endl;
			
		}
	}

}
 
int main() {
    solve();
    return 0;
}
