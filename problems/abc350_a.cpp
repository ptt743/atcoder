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
	string s; cin>> s;
	int num = 0;
	int b = 1;
	for(int i =5;i>=3;i--){
		num += (s[i]-'0')* b;
		b*=10;
	}
	if( num >=1 && num <= 349 && num!= 316) {
		cout<< "Yes"<<endl;
	} else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
