#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define mod 998244353
//*****taipt*****//
using mint = modint998244353;

long long f(long long j,long long n){
  long long p2=(1ll<<j); // 2^j
  long long k=n/(2*p2);
  long long res=k*p2;
  long long l=n%(2*p2);
  if(l>=p2){
    res+=(l-p2+1);
  }
  return res;
}

void solve(){
	long long n,m;
	cin>> n >> m;
	long long res = 0;
	for(long long i =0;i<60;i++){
		if(m&(1ll<i)){
			res+=f(i,n);
			res%=mod;
		}
	}
	cout<< res << endl;
}
 
int main() {
    solve();
    return 0;
}
