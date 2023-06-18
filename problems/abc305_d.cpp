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
  vector<long long> a(n +1);
  vector<long long> as, wu;
  for(int i=1;i<=n;i++){
      cin>> a[i];
      if(i%2==0) as.push_back(a[i]);
      if(i%2!=0 && i!=1) wu.push_back(a[i]);
  }
  vector<long long> sum(as.size());
  for(int i =0;i< as.size();i++){
    sum[i] = wu[i] - as[i];
    if(i>0) sum[i] += sum[i-1];

  }

  int  q;
  cin>> q;
  while(q--){
    long long l, r;
    cin>> l>> r;
    int left = upper_bound(wu.begin(), wu.end(), l) - wu.begin();
    int right =upper_bound(as.begin(),as.end(), r)  - as.begin()-1;
    long long result = 0;
    result = wu[left]  - max(l,as[left])  + min(r,wu[right]) - as[right];
    if(right<left)result = 0;
    if(right == left) result = min(r,wu[right]) - max(l,as[left]);
    if(right-1>left)result += sum[right-1] - sum[left];
    cout<<result<<endl;
  }

}
 
int main() {
    solve();
    return 0;
}
