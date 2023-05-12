#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<unordered_map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//

void step(vector<long long> &a,long long p,long long mxm){
  long long sz=a.size();
  for(long long i=0;i<sz;i++){
    long long ad=a[i];
    while(1){
      ad*=p;
      if(ad>mxm){break;}
      a.push_back(ad);
    }
  }
}
vector<int> primes(int p){
  unordered_map<int, bool> mp;
  vector<int> res;
  for(int i= 2;i<=p;i++){
    if(mp[i]) continue;
    res.push_back(i);
    int temp = i;
    while(temp<=p){
      mp[temp] = true;
      temp+=i;
    }
  }
  return res;
}
void solve(){
	long long n;
  int p;
  cin>> n>> p;
  vector<int> prime = primes(p);
  vector<long long> u={1},v={1};
  for(auto &nx : prime){
    if(u.size()<v.size()){step(u,nx,n);}
    else{step(v,nx,n);}
  }
  // cerr << u.size() << " " << v.size() << "\n";
  sort(u.begin(),u.end());
  sort(v.begin(),v.end());
  long long res=0,j=v.size()-1;
  for(long long i=0;i<u.size();i++){
    long long mv=(n/u[i]);
    while(j>=0 && mv<v[j]){j--;}
    if(j<0){break;}
    res+=(j+1);
  }
  cout << res << "\n";
}
 
int main() {
    solve();
    return 0;
}
