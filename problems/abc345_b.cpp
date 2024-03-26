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
	long long n; cin>> n;
	if(n%10==0){
		cout<< n/10 << endl;
	} else {
		if(n>0)
			cout<< n/10 +1 << endl;
		else cout<< n/10 << endl;
	}
}
 
int main() {
    solve();
    return 0;
}
