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
  int T;
  cin >> T;
  while (T--) {
	    int N;
	    cin >> N;
	    vector<int> A(2 * N);
	    for (auto& a : A) cin >> a;
	    vector<vector<int>> position(N + 1);
	    for (int i = 0; i < 2 * N; i++) position[A[i]].push_back(i);
	    set<pair<int, int>> answers;
	    for (int i = 0; i + 1 < 2 * N; i++) {
		      int a = A[i], b = A[i + 1];
		      if (position[a][0] + 1 == position[a][1]) continue;
		      if (position[b][0] + 1 == position[b][1]) continue;
		      vector<int> v{position[a][0], position[a][1], position[b][0],
				    position[b][1]};
		      sort(begin(v), end(v));
		      if (v[0] + 1 == v[1] and v[2] + 1 == v[3]) {
			answers.emplace(minmax(a, b));
		      }
	    }
	    cout << answers.size() << "\n";
  }
}
 
int main() {
    solve();
    return 0;
}
