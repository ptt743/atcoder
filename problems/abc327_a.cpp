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
	int n ;
	string s;
	cin>> n;
	cin>> s;
	bool check = false;
	for(int i =0;i<n;i++){
		string temp = s.substr(i,2);
		if(temp=="ab" || temp =="ba"){
			check = true;
			break;
		}
	}
	if(check) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
