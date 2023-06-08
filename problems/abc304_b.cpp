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
  int dele = 0;
  if(n<=3) dele = n;
  else if (n<= 4)dele = n-1;
  else if (n<=5) dele = n-2;
  else if (n<=6)dele = n-3;
  else if (n<=7)dele = n-4;
  else if (n<=8) dele = n-5;
  else if(n<=9) dele = n-6;
  for(int i =0;i< n;i++){
    if(i>=dele) cout<<"0";
    else cout<<s[i];
  }
  cout<<endl;
  
}
 
int main() {
    solve();
    return 0;
}
