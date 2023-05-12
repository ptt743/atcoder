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
using mint = atcoder::modint998244353;
long long N;
map<long long, mint> mp;
mint RC(long long n){
  if(n>=N){
    return(n==N)?1:0;
  }
  if(mp.count(n)) return mp[n];
  mint res = 0;
  for(int i =2;i<=6;i++){
    res+=RC(n*i);
  }
  return mp[n]= res/5;
}
void solve(){
  cin>> N;
  cout<<RC(1).val()<<endl;
}
 
int main() {
    solve();
    return 0;
}
