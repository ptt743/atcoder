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
	int h ,w , n;
	cin >> h >> w >> n;
	int x =0, y = 0;
	vector<vector<char>> a(h, vector<char>(w,'.'));
	int d =0;

	vector<pair<int,int>> clock = {{0,1},{1,0},{0,-1},{-1,0}};
	vector<pair<int,int>> unclock = {{0,-1},{-1,0},{0,1},{1,0}};
	while(n--){
		if(a[x][y] == '.'){
			a[x][y] = '#';
			x= (x + clock[d].first);
			if(x<0) x+=h;
			x%=h;
			y= (y + clock[d].second);
			if(y<0) y+= w;
			y%=w;

			d++;
			d = d%4;
		} else if ( a[x][y] == '#'){
			a[x][y] = '.';
			x= (x + unclock[d].first);
			if(x<0) x+=h;
			x%=h;
			y= (y + unclock[d].second);
			if(y<0) y+= w;
			y%=w;
			d--;
			if(d<0) d+=4;
			d = d%4;
		}
	}
	for(int i =0;i<h ;i++){
		for(int j= 0; j< w; j++){
			cout<< a[i][j];
		}
		cout<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
