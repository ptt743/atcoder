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
	vector<pair<pair<ull,int>,pair<ull,int>>> node;
	SegmentTree(int n) : node(4 * n + 12) {}
	void update(int v, int l, int r, int pos, ull val) {
		if (r < pos || l > pos) return;
		if (l == r) {
			node[v] = make_pair(make_pair(0,0),make_pair(val,1));
		return;
		}
		int m = (l + r) >> 1;
		update(v << 1, l, m, pos, val);
		update(v << 1 | 1, m + 1, r, pos, val);
	
		map<ull,int> temp;
		vector<pair<ull,int>> arr;
		temp[node[v<<1].first.first] += node[v<<1].first.second;
		temp[node[v<<1].second.first] += node[v<<1].second.second;
		temp[node[v<<1|1].first.first] += node[v<<1|1].first.second;
		temp[node[v<<1|1].second.first] += node[v<<1|1].second.second;
		for(auto& pair: temp){
			arr.push_back(make_pair(pair.first, pair.second));
		}
		int n = arr.size();
				
		node[v] = make_pair(arr[n-2], arr[n-1]);
	}
	pair<pair<ull,int>,pair<ull,int>> get(int v, int l, int r, int tl, int tr) {
		if (r < tl || l > tr) return make_pair(make_pair(0,0),make_pair(0,0));
		if (tl <= l && r <= tr) return node[v];
		int m = (l + r) >> 1;
		pair<pair<ull,int>,pair<ull,int>> first = get(v << 1, l, m, tl, tr);
		pair<pair<ull,int>,pair<ull,int>> second = get(v << 1 | 1, m + 1, r, tl, tr);
		pair<pair<ull,int>,pair<ull,int>> result;

		map<ull,int> temp;
		vector<pair<ull,int>> arr;
		temp[first.first.first] += first.first.second;
		temp[first.second.first] += first.second.second;
		temp[second.first.first] += second.first.second;
		temp[second.second.first] += second.second.second;
		for(auto& pair: temp){
			arr.push_back(make_pair(pair.first, pair.second));
		}
		int n = arr.size();
				
		result = make_pair(arr[n-2], arr[n-1]);
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
		mp[i][a] = mp[i-1][a]+1;
	}
	while(q--){
		int t; long long a, b;
		cin>> t >> a >> b;
		if(t==1) st.update(1,1,n,a,b);
		else{
			pair<pair<ull,int>,pair<ull,int>> value = st.get(1,1,n,a,b);
			if(value.first.first == value.second.first){
				cout<<"0"<<endl;
				continue;
			}

			cout<< value.first.second << endl;
			
		}
	}

}
 
int main() {
    solve();
    return 0;
}
