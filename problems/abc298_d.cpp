#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<cmath>
using namespace std;
//*****taipt*****//

using ll = long long;
const long long MOD = 998244353;

ll powMod(int base, ll time) {
  ll res = 1;
  for (ll i = 0; 1 << i <= time; i++) {
    if ((time & (1 << i)) == 0)
      continue;
 
    ll tmp = base;
 
    for (ll k = 0; k < i; k++)
      tmp = tmp * tmp % MOD;
 
    res = res * tmp % MOD;
  }
  return res;
}


void solve(){
	int q;
  cin>>q;
  string s  = "1";
  int num =1;
  while(q--){
    int t;
    cin>> t;
    if(t==1){
      int x;
      cin>> x;
      num = (num*10 + x)%MOD;
    } else if(t==2)  {
      string s = to_string(num);
      num =((num + 10*MOD - (s[0]-'0')*powMod(10,s.size()-1))%MOD)%MOD;
    } else {
      cout<<num<<endl;
    }
  }
}
 
int main() {
    solve();
    return 0;
}
