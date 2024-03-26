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
	int n = s.size();
	if(s[0]!='<' || s[n-1]!='>'){
		cout<<"No"<<endl;
		return;
	}
	bool check = true;
	for(int i =1;i< n-1;i++){
		if(s[i]!='='){
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
	
}
 
int main() {
    solve();
    return 0;
}
