#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<cmath>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int a, b;
	cin>> a>> b;
	long long result = pow(a,b) + pow(b,a);
	cout<< result<< endl;
}
 
int main() {
    solve();
    return 0;
}
