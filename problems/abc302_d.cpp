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
	long long n,m,d;
  cin>>n>>m>>d;
  vector<long long> a(n);
  vector<long long> b(m);
  for(long long &item: a) cin>> item;
  for(long long &item:b) cin>>item;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  long long result = -1;
  for(int i=0;i< n;i++){
    int left = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
    if(left!=m && b[left]==a[i]) result= max(result, b[left]+a[i]);
    if(left-1>=0 && abs(b[left-1]- a[i])<=d){
        result = max(result, b[left-1]+ a[i]);
    }
    int right = upper_bound(b.begin(), b.end(), a[i]+d) - b.begin();
    if(right-1>=0 && abs(b[right-1]-a[i] )<=d)
      result = max(result, b[right-1]+ a[i]);
  }
  cout<<result<<endl;

}
 
int main() {
    solve();
    return 0;
}
