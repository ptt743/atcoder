#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<functional>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

typedef pair<long long, int> PII;
void solve(){
	int n;
	long long a,b,c;
	cin>> n >> a >> b >> c;
	long long d[2][1001];
	long long adj[1001][1001];
	for(int i =1;i<=n;i++){
		for( int j = 1;j<=n;j++) cin>> adj[i][j];
	}

	function<void(int,int)> dj = [&](int s, int id)-> void{
		for(int i =0;i<=n;i++) d[id][i] = 1e18;
		priority_queue<PII, vector<PII>, greater<PII>> qq;
		qq.push({0,s});
		d[id][s] =0;
		while(!qq.empty()){
			PII top = qq.top();
			qq.pop();
			long long u  = top.first;
			int v = top.second;
			for(int i =1;i<=n;i++){
				if(i!=v){
					long long distance = u;
					if(id==0) distance += adj[v][i]*a;
					else distance += adj[i][v]*b+c;
					if(d[id][i] > distance){
						d[id][i] = distance;
						qq.push({distance, i});
					}
				}
			}
		}
	};

	dj(1,0);
	dj(n,1);
	long long ans = 1e18;
	for(int i =1;i<=n;i++){
		ans = min(ans, d[0][i] + d[1][i]);
	}
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
