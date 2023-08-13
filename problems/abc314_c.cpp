#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<deque>
#include<map>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n, m;
	cin>> n>> m;
	string s;
	cin>> s;
	vector<int> a(n);
	map<int,deque<char>> mp;
	for(int i =0;i< n;i++) {
		cin>> a[i];
		mp[a[i]].push_back(s[i]);
	}
	vector<bool> check(m+1);
	for(int i =0;i< n;i++){
		if(check[a[i]]==false){
			cout<< mp[a[i]].back();
			mp[a[i]].pop_back();
			check[a[i]] = true;
		} else {
			cout<< mp[a[i]].front();
			mp[a[i]].pop_front();
		}
	}
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
