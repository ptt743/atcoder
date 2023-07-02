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
  vector<bool> check(n,true);
  stack<int> st1;
  stack<int> st2;
  for(int i =0;i< n;i++){
    if(s[i]=='(') st1.push(i);
    else if (s[i]!=')' && s[i]!='(') st2.push(i);
    else {
      if(st1.size()>0){
        int index  = st1.top();
        check[st1.top()] = false; st1.pop();
        check[i] = false;
        while(st2.size()>0 && st2.top()<i && st2.top()> index )
        {
          check[st2.top()] = false;
          st2.pop();
        }
      }else {
        st2.push(i);
      }
    }
  }
  for(int i =0;i< n;i++)if(check[i]) cout<< s[i];
  cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
