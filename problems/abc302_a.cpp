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
	long long A,B;
  cin>>B>>A;
  long long result = B/A;
  if(B%A!=0)result++;
  cout<<result<<endl;
}
 
int main() {
    solve();
    return 0;
}
