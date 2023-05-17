#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include <bitset>
#include<cmath>

using namespace std;
using namespace atcoder;
//*****taipt*****//
void solve(){
  string s;
  cin>> s;
  long long n;
  cin>> n;
  long long mu = s.size()-1;
  long long num =0;
  vector<long long> mus;
  for(int i=0;i<s.size();i++ ){
    if(s[i]=='?') mus.push_back(mu);
    else if (s[i]=='1') num |= 1ll<<mu;
    mu--;
  }
  if(num>n){ cout<<"-1"<<endl; return;}
  for(int i =0;i<mus.size();i++){
    if((num|(1ll<<mus[i]))<= n){ num |=(1ll<<mus[i]);}
  }
  cout<<num<<endl;
}
 
int main() {
    solve();
    return 0;
}
