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
	string temp = "";
	temp+=s[0];
	for(int i =1;i< n;i++){
		if(s[i] ==s[i-1]) continue;
		else temp +=s[i];
	}
	if(temp == "" || temp =="ABC" || temp =="A" || temp =="B" || temp =="C"
	   || temp =="AB" || temp =="AC" || temp =="BC"	) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
