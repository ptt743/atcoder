#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<map>
#include <climits>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	long long w,h;
  cin>> w>> h;
  long long n ;
  cin>> n;
  vector<pair<long long,long long>> chery;
  for(long long i =0;i< n;i++){
    long long x,y;
    cin>> x>> y;
    chery.push_back(make_pair(x,y));
  }
  long long A,B;
  cin>> A;
  vector<long long> a(A);
  for(long long i =0;i< A;i++) cin>>a[i];
  cin>> B;
  vector<long long> b(B);
  for(long long i =0;i< B;i++) cin>> b[i];
  map<string, long long> mp;
  long long min_val= n, max_val = 0;
  for(int i =0;i< n;i++){
    long long x = upper_bound(a.begin(),a.end(),chery[i].first) - a.begin();
    long long y = upper_bound(b.begin(), b.end(), chery[i].second)- b.begin();
    string temp  = to_string(x) +"_" + to_string(y);
    mp[temp]++;
     }
  if(mp.size()!=(A+1)*(B+1)) min_val = 0;
  else {
    for(auto p : mp) min_val = min(min_val, p.second);
  }
  for(auto p : mp) max_val = max(max_val, p.second);
  cout<<min_val<<" "<<max_val<<endl;
}
 
int main() {
    solve();
    return 0;
}
