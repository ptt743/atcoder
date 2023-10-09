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
	int n,m;
	cin>> m >> n;
	string s, t;
	cin>> t >> s;
	if(n<m){
		cout<< "3"<<endl;
		return ;
	}
	string temp = s.substr(0,m);
	string temp2 = s.substr(n-m);
	int res = -3;
	if(temp == temp2 && temp== t) res =0;
	else if(temp == t) res = 1;
	else if ( temp2 == t) res = 2;
	else res  = 3;
	cout<< res << endl;
	
}
 
int main() {
    solve();
    return 0;
}
