#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<map> 
#include<set>
using namespace std;
using namespace atcoder;
//*****taipt*****//

void solve(){
	int n;
  long long t,c,r;
  map<long long, long long> mp;
  map<long long, int> mp2;
  cin>> n >>t;
  vector<pair<long long, long long>> pairs;
  for( int i=0;i< n;i++){
    cin>> c;
    pairs.push_back(make_pair(c,0));
  }
  for(int i =0;i< n;i++){
    cin>> r;
    pairs[i].second = r;
  }
  for(int i =0;i< n;i++){
    long long tt = pairs[i].first;
    long long rt = pairs[i].second;
    mp[tt] = max(mp[tt], rt);
    mp2[rt] = i;
  }
  if(mp.find(t)!=mp.end()){
    long long rt = mp[t];
    cout<<mp2[rt]+1<<endl;
  } else{
    cout<<mp2[mp[pairs[0].first]]+1<<endl;
  }
}
 
int main() {
    solve();
    return 0;
}
