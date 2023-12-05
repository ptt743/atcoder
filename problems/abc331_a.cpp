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
	int M, D;
	cin>> M >> D;
	int y, m,d;
	cin>> y >> m >> d;
	d = d%D + 1;
	if(d==1) m = m%M + 1;
	if( m==1 && d==1) y++;
	cout<< y <<" "<<m<<" "<< d<<endl;
}
 
int main() {
    solve();
    return 0;
}
