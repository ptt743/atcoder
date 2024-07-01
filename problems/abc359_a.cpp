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
	int n; cin>> n;
	int count = 0;
	while(n--){
		string s; cin>> s;
		if(s=="Takahashi") count++;
	}
	cout<< count<<endl;
}
 
int main() {
    solve();
    return 0;
}
