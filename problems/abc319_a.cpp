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
	int count = 10;
	map<string, int> mp;
	mp["tourist"] = 3858;
	mp["ksun48"] = 3679;
	mp["Benq"] = 3658;
	mp["Um_nik"] = 3648;
	mp["apiad"] = 3638;
	mp["Stonefeang"] = 3630;
	mp["ecnerwala"] = 3613;
	mp["mnbvmar"] = 3555;
	mp["newbiedmy"] = 3516;
	mp["semiexp"] = 3481;
	string s; cin>> s;
	cout<< mp[s]<<endl;
	
}
 
int main() {
    solve();
    return 0;
}
