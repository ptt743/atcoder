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
	int n; cin>> n;
	string s, t;
	cin>> s >> t;
	int count = 0;
	for(int i =0;i< n;i++) if(s[i]!=t[i]) count++;
	cout<< count<<endl;
}
 
int main() {
    solve();
    return 0;
}
