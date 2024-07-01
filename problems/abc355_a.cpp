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
	int a,b ;
	cin>> a >> b;
	if(a==b) cout<< "-1"<<endl;
	else {
		cout<<( 6 -a-b)<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
