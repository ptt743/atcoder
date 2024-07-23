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

long long TEN(int x) { return x == 0 ? 1 : TEN(x - 1) * 10; }
int solve() {
  long long N;
  cin >> N;
  if (N == 1) {
    cout << 0 << endl;
    return 0;
  }
  N--;
  long long sum =1;
  for (int d = 1;; d++) {
    int x = (d + 1) / 2;
    if (N <= 9 * TEN(x - 1)) {
      cout<< N<<" "<<x<<" "<<sum<<endl;
      string S = to_string(TEN(x - 1) + N - 1);
      S.resize(d, ' ');
      for (int i = x; i < d; i++) S[i] = S[d - 1 - i];
      cout << S << endl;
      return 0;
    } else {
	   cout<<9*TEN(x-1)<<endl; 
      sum+= 9*TEN(x-1);
      N -= 9 * TEN(x - 1);
    }
  }
}
 
int main() {
    solve();
    return 0;
}
