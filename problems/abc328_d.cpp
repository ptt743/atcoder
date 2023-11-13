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
	string s;
	cin>> s;
	int n = s.size();
	string ans = "";
	for(int i =0;i<n;i++){
		ans += s[i];
		if(ans.size()>=3 && ans.substr(ans.size()-3)=="ABC")
			ans.erase(ans.end()-3, ans.end());
	}
	cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
