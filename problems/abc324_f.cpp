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

const int MaxN = 2e5 + 3;
const int inf = 0x3f3f3f3f;
struct Edge{
	int nxt, b, c;
};
int N, M;
double dp[MaxN];
vector<Edge> e[MaxN];
bool check(double x){
	int nxt, bj, cj;
	for(int i = 1; i <= N; i++) dp[i] = -inf;
	dp[1] = 0;
	for(int i = 1; i <= N; i++){
		for(int j = 0; j < e[i].size(); j++){
			nxt = e[i][j].nxt, bj = e[i][j].b, cj = e[i][j].c;
			dp[nxt] = max(dp[nxt], dp[i] + bj - x*cj);
		}
	}
	if(dp[N] >= 0) return true;
	return false;
}

void solve(){
	int u, v, bi, ci;
	cin>>N>>M;
	for(int i = 1; i <= M; i++){
		cin>>u>>v>>bi>>ci;
		e[u].push_back({v, bi, ci});
	}
	double l = 0, r = 2e9, mid;
	while(r - l >= 1e-10){
		mid = (l+r)/2;
		if(check(mid)) l = mid;
		else r = mid;
	}
	cout<<fixed<<setprecision(10)<<l<<endl;
	return 0;
}
 
int main() {
    solve();
    return 0;
}
