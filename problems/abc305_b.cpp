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
	vector<int> a = {0, 3,1,4,1,5,9};
  for(int i =1;i< 8;i++){
    a[i] +=a[i-1];
  }
  char p,q;
  cin>> p >> q;

  if(p> q){swap(p,q);}
  cout<<a[q-'A'] - a[p-'A']<<endl;
}
 
int main() {
    solve();
    return 0;
}
