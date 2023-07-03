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
  cin>> n;
  vector<string> a(n);
  vector<string> b;
  function<bool(string)>check = [&](string s)-> bool {
    int l = 0, r = s.size()-1;
    while(l<r){
      if(s[l]!=s[r]) return false;
      l++;
      r--;
    }
    return true;
  };
  for(int i =0;i< n;i++) cin>> a[i];
  for(int i =0;i< n;i++){
    for(int j = 0;j<n;j++){
      if(i!=j && check(a[i]+a[j])){
        cout<<"Yes"<<endl;
        return ;
      }
    }
  }
  cout<<"No"<<endl;

}
 
int main() {
    solve();
    return 0;
}
