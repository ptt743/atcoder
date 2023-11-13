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
	int n,q;
	cin>> n >> q;
	string s;
	cin>> s;
	vector<int> a(n,0);
	for(int i =1;i<n;i++){
		a[i] = a[i-1];
		if(s[i-1]==s[i]){
			a[i]++;	
		}
	}
	while(q--){
		int l, r;
		cin>> l>>r;
		cout<< a[r-1] - a[l-1]<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
