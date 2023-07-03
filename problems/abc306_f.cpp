#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<atcoder/fenwicktree>

using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n, m;
  cin>> n>> m;
  vector<vector<long long>> a(n,vector<long long>(m));
  vector<long long> v;
  for(int i =0;i< n;i++){
    for(int j=0;j< m;j++){
      cin>> a[i][j];
      v.push_back(a[i][j]);
    }
  }
  sort(v.begin(), v.end());
  long long ans = (m+1)*m/2 * (n-1 + 1) * (n-1)/2;
  fenwick_tree<int> fw(n * m);
  for(int i = n-1; i>=0;i--){
    for (int j = 0; j < m; j++) {
      a[i][j] = lower_bound(v.begin(), v.end(), a[i][j]) - v.begin();
      ans += fw.sum(0, a[i][j]);
    }
    for (int j = 0; j < m; j++) {
            fw.add(a[i][j], 1);
    }
  }
  cout << ans << endl;
}
 
int main() {
    solve();
    return 0;
}
