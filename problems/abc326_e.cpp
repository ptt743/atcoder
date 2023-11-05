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
#define mod 998244353
#define FACSIZE 1048576

long long power(long long a,long long b){
  long long x=1,y=a;
  while(b>0){
    if(b&1ll){
      x=(x*y)%mod;
    }
    y=(y*y)%mod;
    b>>=1;
  }
  return x%mod;
}

long long modular_inverse(long long n){
  return power(n,mod-2);
}

void solve(){
  long long n;
  cin >> n;
  long long invn=modular_inverse(n);
  long long p=invn,res=0;
  for(long long i=0;i<n;i++){
    long long a;
    cin >> a;
    res+=p*a;res%=mod;
    p+=p*invn;p%=mod;
  }
  cout << res << "\n";
  return 0;
} 
int main() {
    solve();
    return 0;
}
