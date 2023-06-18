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
  int result = n/5;
  int t = n%5;
  if(t>=3) result+=1;
  cout<< 5*result<<endl;
}
 
int main() {
    solve();
    return 0;
}
