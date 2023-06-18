#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n,k,q;
  cin>> n>> k>> q;
  set<pair<long long,long long>> st1, st2;
  unordered_map<long long,long long> mp;
  int count =0;
  long long sum =0;
  while(q--){
    count++;
    long long x, y;
    cin>> x>>y;
    if(count<=k){
      st1.insert(make_pair(y,x));
      sum+=y;
      mp[x] = y;
    } else {
      auto it  = st1.find(make_pair(mp[x],x));
      if(it!=st1.end()){
        st1.erase(it);
        st1.insert(make_pair(y,x));
        sum= sum - mp[x] + y;
      }else {
        auto it2 = st2.find(make_pair(mp[x],x));
        if(it2!=st2.end()) st2.erase(it2);
        st2.insert(make_pair(y,x));
      }
      mp[x] = y;
      if(st2.size()>0){
      auto be = st1.begin();
      auto end = st2.end(); --end;
        if((*be).first<(*end).first){
          sum = sum - (*be).first + (*end).first;
          auto temp1 = *be, temp2 = *end;
          st1.erase(be);
          st2.erase(end);
          st1.insert(temp2);
          st2.insert(temp1);
        }
      }
    }
  cout<<sum<<endl;
  }
}
 
int main() {
    solve();
    return 0;
}
