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
	int q; cin>> q;
	char check[26];
	for(int i =0;i<26;i++){
		check[i] = i + 'a';
	}
	while(q--){
		char a,b;
		cin>> a >> b;
		for(int i =0;i< 26;i++){
			if(check[i]==a) check[i] = b;
		}

	}
	for(int i =0;i< n;i++){
		cout<< check[s[i]-'a'];
	}
	cout<< endl;
}
 
int main() {
    solve();
    return 0;
}
