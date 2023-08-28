#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include <climits>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int  h,w;
	cin>> h>> w;
	vector<vector<char>> adj(h, vector<char>(w));
	int xs = 0, ys= 0;
	int xg = 0, yg=0;
	for(int i =0;i< h;i++){
		for(int j=0;j<w;j++){
			cin>> adj[i][j];
			if(adj[i][j]=='S') xs = i, ys = j;
			if(adj[i][j]=='G') xg = i, yg = j;
		}
	}

	vector<vector<char>> a = adj;
	vector<vector<char>> b = adj;
	for(int i =0 ;i< h;i++){
		for(int j =0;j<w;j++){
			if(a[i][j]!='.') continue;		
			if(i> 0 && (a[i-1][j]=='v' || a[i-1][j]=='!')) a[i][j] ='v';
			if(j>0 &&  (a[i][j-1]=='>' || a[i][j-1]=='!')) a[i][j]='>';
			if(i>0 && j>0 && (a[i-1][j]=='v' || a[i-1][j]=='!')&& (a[i][j-1]=='>' || a[i][j-1]=='!')) a[i][j]='!';
		}
	}
	for(int i =h-1 ;i>=0;i--){
			for(int j =w-1;j>=0;j--){
				if(b[i][j]!='.') continue;
				if(i<h-1 && (b[i+1][j]=='^' || b[i+1][j]=='!')) b[i][j] ='^';
				if(j<w-1 &&  (b[i][j+1]=='<' || b[i][j+1]=='!')) b[i][j]='<';
				if(i<h-1 && j<w-1 && (b[i+1][j]=='^' || b[i+1][j]=='!')&& (b[i][j+1]=='<' || b[i][j+1]=='!')) b[i][j]='!';
		}
	}
	for(int i =0;i< h;i++){
		for(int j =0;j< w;j++){
			if(a[i][j]!='.' || b[i][j]!='.') adj[i][j] = '#';
		}
	}

	adj[xs][ys] = 'S';
	adj[xg][yg] = 'G';

	int dx[] = {1,-1,0,0};
	int dy[] = {0,0,-1,1};
	int ans = -1;
	vector<vector<bool>> visited(h, vector<bool>(w,false));
	queue<pair<pair<int,int>,int>> qq;
	qq.push(make_pair(make_pair(xs,ys),0));
	visited[xs][ys] = true;
	function<void()> bfs = [&]()-> void{
		while(!qq.empty()){	
		pair<pair<int,int>,int> front = qq.front();
		qq.pop();	
		int x  = front.first.first;
		int y = front.first.second;
		int sum  = front.second;
		if(x == xg && y ==yg) ans = sum; 
		for( int i =0;i< 4;i++){
			int u = x + dx[i];
			int v =  y + dy[i];
			if(u<0 || u>=h || v<0 || v>=w) continue;
			if(visited[u][v] || adj[u][v] =='#') continue;
			visited[u][v] = true;	
			qq.push(make_pair(make_pair(u,v),sum+1));
		}
		}
	};
	bfs();
	cout<< ans<<endl;


}
 
int main() {
    solve();
    return 0;
}
