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
	float x; cin>> x;
	int result = 2 ;
	if(x>=38) result = 1;
	if(x< 37.5) result = 3;
	cout<< result <<endl;
}
 
int main() {
    solve();
    return 0;
}
