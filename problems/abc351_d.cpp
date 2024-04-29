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
typedef long long ll;


void solve(){
	ll h, w;
	cin >> h >> w;
	vector<vector<char>> a(h+1, vector<char>(w+1,'a'));
	for(ll i =1;i<=h;i++){
		for(ll j =1;j<=w;j++) cin>> a[i][j];
	}
	vector<ll> dx = {1,0,-1,0};
	vector<ll> dy = {0,1,0,-1};
	for(ll i = 1;i<=h;i++){
		for(ll j =1;j<=w;j++){
			if(a[i][j]=='#'){
				for(int k = 0;k<4;k++){
					ll tempy = i + dy[k];
					ll tempx = j + dx[k];
					if(tempy>=0 && tempy<= h && tempx>=0 && tempx<=w && a[tempy][tempx] =='.') a[tempy][tempx] = '+';
				}
			}
		}
	}
	ll turn  =0;
	vector<vector<ll>> visited(h+1, vector<ll> (w+1, -1));
	function<ll(ll, ll)> bfs = [&](ll x,ll y)-> ll{
		queue<pair<ll,ll>> qq;
		qq.push(make_pair(x,y));
		visited[x][y] = turn;
		ll count =1;
		while(!qq.empty()){
			auto top = qq.front();
			qq.pop();
			ll u = top.first;
			ll v = top.second;
			if(a[u][v]=='+') continue;
			a[u][v] = '+';
			for(int k =0;k<4;k++){
				ll tempy = u + dy[k];
				ll tempx = v + dx[k];
				if(tempy >=1 && tempy <=h && tempx>=1 && tempx <= w && a[tempy][tempx]!='#' && visited[tempy][tempx] != turn){
					visited[tempy][tempx] = turn;
					count++;
					qq.push(make_pair(tempy, tempx));
				}
			}
		}
		return count;
	};
	ll ans = 1;
	for(ll i =1;i<=h;i++){
		for(ll j = 1;j<=w; j++){
			if(a[i][j]=='.'){
				turn++;
				ans = max(ans, bfs(i,j));
			}
		} 
	}
	cout<< ans<<endl;

}
 
int main() {
    solve();
    return 0;
}
