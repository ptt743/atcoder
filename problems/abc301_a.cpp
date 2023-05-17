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

void solve(){
	int n;
  string s ;
  cin>> n;
  cin>> s;
  bool check  = true;
  int counta=0;
  int countb = 0;
  for(int i =0;i< n;i++){
    if(s[i]=='T') counta++;
    if(s[i]=='A') countb++;
    if(counta> countb) check = true;
    else if( countb> counta) check = false;
  }
  if(counta> countb) cout<<"T"<<endl;
  else if ( countb> counta) cout<<"A"<<endl;
  else if(check) cout<<"T"<<endl;
  else cout<<"A"<<endl;
}
 
int main() {
    solve();
    return 0;
}
