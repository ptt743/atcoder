#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	map<char, char> mp;
	mp['N'] = 'S';
	mp['S'] = 'N';
	mp['W'] = 'E';
	mp['E'] = 'W';
	string s;
	cin>> s;
	int n = s.size();
	for(int i =0;i< n;i++) cout<< mp[s[i]];
	cout<< endl;
}
 
int main() {
    solve();
    return 0;
}
