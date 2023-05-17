#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<cmath>
using namespace std;
using namespace atcoder;
//*****taipt*****//

void solve(){
	int n ;
  cin>> n;
  vector<int> a(n);
  for( int i =0;i<n;i++) cin>> a[i];
  vector<int> result{a[0]};
  for(int i =0;i<n-1;i++){
    if(abs(a[i]- a[i+1])!=1){
      if(a[i]> a[i+1]){
        int temp = a[i]-1;
        while(temp- a[i+1]>=0) {result.push_back(temp); temp--;}
      } else{
        int temp = a[i]+1;
        while(a[i+1] - temp>=0){ result.push_back(temp); temp++;}
      }
    } else result.push_back(a[i+1]);

  }
  for(int i =0;i<result.size();i++ ) cout<<result[i]<<" ";
  cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
