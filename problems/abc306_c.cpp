#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	vector<pair<int,int>> arr;
  map<int,int> mp;
  int n ;
  cin >> n ;
  for(int i =0;i< 3*n;i++){
    int t;
    cin>> t;
    if(mp[t]==1) arr.push_back(make_pair(i,t));
    mp[t]++;
  }
  sort(arr.begin(), arr.end());
  for(int i =0;i< n;i++) cout<< arr[i].second<<" ";
  cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
