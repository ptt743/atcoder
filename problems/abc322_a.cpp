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
	string s;
	cin>> s;
	for(int i =0;i< n-2;i++){
		if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
			cout<< i+1<<endl;
			return ;
		}
	}
	cout<<"-1"<<endl;
}
 
int main() {
    solve();
    return 0;
}
