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
  string s;
  cin>> n;
  cin>> s;
  vector<int> sum(n+1);
  for(int i =0;i< n;i++){
    if(s[i]=='-')sum[i+1]=1;
    else sum[i+1]=0;
  }
  for(int i =2;i<=n;i++) sum[i]+= sum[i-1];
  int left = 2, right = s.size();
  while(left<=right){
    int mid = (left+ right)/2;
    bool flag = false;
    for(int i =0;i< n- mid+1;i++ ){
      if((s[i]=='-'|| s[i+ mid-1]=='-')&&(sum[i+mid]- sum[i]==1)){
        flag = true;
        break;
      }
    }
    if(flag) left = mid+1;
    else right = mid-1;
  }
  if(right<2) {cout<<"-1"<<endl; return;}
  cout<<right-1<<endl;

}
 
int main() {
    solve();
    return 0;
}
