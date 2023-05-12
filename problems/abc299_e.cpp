#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<set>

using namespace std;
using namespace atcoder;
//*****taipt*****//

#define MAXN 2001
#define MAXV 2001
set<int> st[MAXN];
int dist[MAXN][MAXN];
int dist_K[MAXN];
int vert_K[MAXN];
bool colour[MAXN];


void bfs(int r) {
	queue<int> q;
	q.push(r);
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		set<int>& adjs = edges[u];
		for (set<int>::iterator it = adjs.begin(); it != adjs.end(); ++it) {
			int v = *it;
			if (dist[r][v] < 0) {
				dist[r][v] = dist[r][u] + 1;
				q.push(v);
			}
		}
	}
}

void solve(){
  int n, m,k;
  cin>>n>>m;
  for(int i =0;i< n;i++){
    int u, v;
    cin>>u>>v;
    st[u].insert(v);
    st[v].insert(u);
  } 
  cin>> k;
  for(int i =0;i< k;i++){
    cin>> vest_k[i]<< dist_K[i];
  }
  for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			dist[i][j] = -1;
		}
		dist[i][i] = 0;
		colour[i] = 0;
		bfs(i);
	}
  for (int i = 1; i <= n; ++i) {
		bool able = true;
		for (int j = 0; j < k; ++j) {
			if (dist[vert_K[j]][i] < dist_K[j]) {
				able = false;
				break;
			}
		}
		colour[i] = able;
	}
  




}
 
int main() {
    solve();
    return 0;
}
