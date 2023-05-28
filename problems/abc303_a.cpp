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
	string s,t;
  int n;
  cin>> n;
  cin>> s>>t;
  for(int i =0;i< n;i++){
    if(s[i]==t[i]) continue;
    string temp="";
    temp += s[i];
    temp += t[i];
    if(temp=="1l" || temp =="l1") continue;
    if(temp =="0o" || temp =="o0") continue;
    cout<<"No"<<endl;
    return ;
  }
  cout<<"Yes"<<endl;
}
 
int main() {
    solve();
    return 0;
}
