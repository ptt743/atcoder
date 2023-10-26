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
	int h,w;
	cin>> h >> w;
	vector<vector<char>> adj(h,vector<char>(w));
	vector<vector<bool>> visited(h,vector<bool>(w,false));
	for(int i =0;i< h;i++){
		for(int j =0;j< w;j++){
			cin>> adj[i][j];
		}
	}
	int dx[] = {0,0,1,-1,-1,-1,1,1 };
	int dy[] = {1,-1,0,0,-1,1,-1,1 };
	function<void(int, int)> dfs =[&](int x ,int y )-> void{
		for(int i =0;i< 8;i++){
			int u = x + dx[i];
			int v = y + dy[i];
			if( u>=0 && u <h && v>=0 && v<w && adj[u][v] =='#' && !visited[u][v]){
				visited[u][v] = true;
				dfs(u,v);
			}
		}
	};
	int count =0;
	for(int i =0;i< h;i++){
		for(int j = 0;j< w;j++){
			if(adj[i][j]=='#' && visited[i][j]==false){
				count++;
				dfs(i,j);
			}
		}
	}
	cout<< count<< endl;

}
 
int main() {
    solve();
    return 0;
}
