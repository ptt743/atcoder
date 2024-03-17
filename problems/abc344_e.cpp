#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n;
	cin>> n;
	vector<long long> a(n);
	map<long long, pair<long long, long long>> mp;
	long long pre = 0;
	mp[pre] = make_pair(0,1e9+1);
	for(int i =0;i< n;i++) {
		cin>> a[i];
		mp[pre].second = a[i];
		pair<long long, long long> temp = make_pair(pre,1e9+1);
		mp[a[i]] = temp;
		pre = a[i];
	}
	long long head = a[0];
	int q; cin>> q;
	while(q--){
		int t; cin>> t;
		if(t==1){
			long long x,y; cin>> x >> y;
			long long z = mp[x].second;
			mp[y] = make_pair(x,z);
			mp[x].second = y;
			mp[z].first = y;
		} if(t==2){
			long long x; cin>> x;
			long long y = mp[x].first;
			long long z = mp[x].second;
			if(head==x) head = z;
			mp[y].second = z;
			mp[z].first = y;
		}
	}
	while(head!=1e9+1){
		cout<<head<<" ";
		head = mp[head].second;
	}
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
