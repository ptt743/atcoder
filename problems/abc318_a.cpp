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
	int n , m, p;
	cin>> n>>m>> p;
	int ans = 0;
	if( n<m){ ans =0;

	} else {
		ans =1;
		n-=m;
		ans+=n/p;
	}
	cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
