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
	int n;
	cin>> n;
	string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
	cout<< s.substr(0,2+n)<<endl;
}
 
int main() {
    solve();
    return 0;
}
