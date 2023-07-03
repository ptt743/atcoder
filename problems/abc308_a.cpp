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
  int pre = -1;
	for(int i =0;i< 8;i++){
    int t;
    cin>> t;
    if( t<pre || (t<100 || t> 675) ||t%25!=0){
      cout<<"No"<<endl;
      return;
    }
    pre = t;
  }
  cout<<"Yes"<<endl;
}
 
int main() {
    solve();
    return 0;
}
