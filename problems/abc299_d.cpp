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
  cin>> n;
  int left =1, right = n-1;
  while(left<=right){
    int mid = (left+right)/2;
    int value;
    cout<<"? "<<mid<<endl;
    fflush(stdout);
    cin>> value<<endl;
    if(value==1) right = mid-1;
    else left = mid+1;
  }
  cout<<"! "<<right<<endl;
}
 
int main() {
    solve();
    return 0;
}
