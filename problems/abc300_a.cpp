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
	int n ;
  int a,b;
  cin>>n>>a>>b;
  int ans = 0;
  for(int i =1;i<=n;i++){
    int t;
    cin>> t;
    if(t==a+b)ans = i;
  }
  cout<<ans<<endl;

}
 
int main() {
    solve();
    return 0;
}
