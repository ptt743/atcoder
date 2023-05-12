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
#define MAXP 300005

vector<long long> sieve(){
  vector<long long> res;
  vector<int> mem(MAXP, 0);
  for(int i =2;i< MAXP;i++){
    if(mem[i]) continue;
    res.push_back(i);
    for(int j =i;j<MAXP;j+=i){
      mem[j]=1;
    }
  }
  return res;
}
void solve(){
	long long n;
  cin>> n;
  vector<long long> p = sieve();
  int size = p.size();
  int res = 0;
  for( int i =0;i< size;i++){
    int k = size-1;
    for(int j = i+1;j< k && j< size;j++){
      while(j<k){
        long long v = p[i]*p[i]*p[j];
        if(v>n){k--; continue;}
        v*=p[k];
        if(v>n){k--; continue;}
        v*=p[k];
        if(v>n){k--; continue;}
        break;
      }
      res+=(k-j);
    }
  }
  cout<<res<<endl;

}
 
int main() {
    solve();
    return 0;
}
