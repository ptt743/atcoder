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
	int h,w,y;
	cin>> h >> w >> y;
	vector<vector<int>> adj(h+1, vector<int>(w+1,0));
	vector<queue<pair<int,int>>> qq(100001, queue<pair<int,int>>());
	vector<vector<bool>> visited(h+1, vector<bool>(w+1, false));
	for(int i =1;i<=h;i++){
		for(int j =1;j<=w;j++){
			cin>> adj[i][j];
			if(i==1 || i == h || j ==1 ||  j==h){
				qq[adj[i][j]].push(make_pair(i,j));
				visited[i][j] = true;
			}
			
		}
	}
	vector<int> count(y+1,0);
	vector<int> dx = {1,-1,0,0};
	vector<int> dy = {0,0,1,-1};
	int ans = w*h;
	for(int i  =1;i<= y;i++){
		while(!qq[i].empty()){
			ans--;
			pair<int, int> front = qq[i].front();
			qq[i].pop();
			for(int j =0;j< 4;j++){
				int nx = front.first+ dx[j];
				int ny = front.second+ dy[j];
				if( nx>=1 && nx <= h && ny>=1 && ny<= w && !visited[nx][ny]){
					qq[max(adj[nx][ny],i)].push(make_pair(nx,ny));
					visited[nx][ny]= true;
				}
			}
		}
		cout<< ans<<endl;
	}


}
 
int main() {
    solve();
    return 0;
}
