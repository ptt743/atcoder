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
	char c1,c2;
	cin>> n >> c1 >> c2;
	string s;
	cin>> s;
	for(int i =0;i< n;i++){
		if(s[i]!=c1) s[i] = c2;
	}
	cout<< s<<endl;
}
 
int main() {
    solve();
    return 0;
}
