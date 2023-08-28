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
	string s;
	cin>> s;
	string ans ="";
	for(int i =0;i< s.size();i++){
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i] !='u') ans +=s[i];
	}
	cout<< ans <<endl;

}
 
int main() {
    solve();
    return 0;
}
