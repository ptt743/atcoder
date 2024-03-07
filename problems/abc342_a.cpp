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
	int n = s.size();
	for(int i =0;i< s.size();i++){
		int left = (i-1+n)%n;
		int right = (i+1)%n;
		if(s[i]!=s[left] && s[i]!= s[right]){
			cout<< i+1 << endl;
		}
	}
}
 
int main() {
    solve();
    return 0;
}
