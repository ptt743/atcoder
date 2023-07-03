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
bool option(pair<long double, int> a, pair<long double, int> b){
  return a.first> b.first || (a.first == b.first && a.second< b.second);
}
void solve(){
	int n;
  cin>> n;
  vector<pair<long double, int>> c;
  for(int i =1;i<=n;i++){
    long double a, b;
    cin>> a>> b;
    c.push_back(make_pair(a/(a+b),i));
  }
  sort(c.begin(),c.end(),option);
  for(int i =0;i<n;i++) cout<< c[i].second<<" ";
  cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
