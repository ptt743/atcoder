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
	int n;
  cin>> n;
  vector<pair<string,long long>> a;
  int index = 0;
  int min_value = 1e9+1;
  for(int i =0;i< n;i++){
    string s;
    long long age;
    cin>> s>> age;
    a.push_back(make_pair(s,age));
    if(age<min_value){
      min_value = age;
      index = i;
    }
  }
  int pre = index;
  cout<<a[index].first<<endl;
  index++;
  index%=n;
  while(index != pre ){
    cout<<a[index].first<<endl;
    index++;
    index  %= n;
  }

}
 
int main() {
    solve();
    return 0;
}
