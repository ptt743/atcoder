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
  int sum =0;
  for(int i =1;i<= 7*n;i++){
    int x;
    cin>> x;
    sum+=x;
    if(i%7==0){
      cout<< sum<<" ";
      sum =0;
    }
  }
  cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
