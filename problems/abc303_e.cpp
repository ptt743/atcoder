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
  vector<set<int>> e(n);
  for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            --u;
            --v;
            e[u].insert(v);
            e[v].insert(u);
    }
  vector<int> result;
  queue<int> q;
  for (int i = 0; i < n; ++i) {
            if (e[i].size() == 1) {
                  q.push(i);
            }
      }
  while (!q.empty()) {
            auto u = q.front();
            q.pop();
            if (e[u].size() != 1) {
                  continue;
            }
            auto middle = *e[u].begin();
            result.push_back(e[middle].size());
            for (auto v: e[middle]) {
                  for (auto x: e[v]) {
                        if (x == middle) {
                              continue;
                        }
                        e[x].erase(v);
                        if (e[x].size() == 1) {
                              q.push(x);
                        }
                  }
                  e[v].clear();
            }
            e[middle].clear();
      }
      sort(result.begin(), result.end());
      for (auto i: result) {
            cout << i << " ";
      }
      cout << "\n";
}
 
int main() {
    solve();
    return 0;
}
