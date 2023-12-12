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
	int n,s,k;
	cin>> n >> s >>k;
	long long result = 0;
	while(n--){
		int p,q;
		cin>> p >> q;
		result += p*q;
	}
	if(result < s) result +=k;
	cout<< result<< endl;
}
 
int main() {
    solve();
    return 0;
}
