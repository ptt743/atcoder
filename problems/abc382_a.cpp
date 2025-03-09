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
	int n,d;
	cin>> n >> d;
	string s; cin>> s;
	int count = 0;
	for(int i =0;i< s.size();i++){
		if(s[i]=='@')  count++;
	}
	int eat = min(count, d);
	cout<<n - count + eat<<endl;
}
 
int main() {
    solve();
    return 0;
}
