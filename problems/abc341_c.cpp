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
	int h,w,n;
	string t;
	cin>> h >> w >> n;
	cin>> t;
	vector<string> a(h);
	map<char, pair<int,int>> mp;
	mp['L'] = make_pair(0,-1);
	mp['R'] = make_pair(0,1);
	mp['U'] = make_pair(-1,0);
	mp['D'] = make_pair(1,0);
	function<bool(int,int)> dfs = [&](int x, int y)-> bool{
		if(a[x][y]=='#') return false;
		bool check = true;
		for(int k =0;k< t.size();k++){
			x += mp[t[k]].first;
			y += mp[t[k]].second;
			if( x<0 || x>=h || y <0 || y>=w || a[x][y]=='#'){
				check = false;
				break;
			}
		}
		return check;
	};
	int count  = 0;
	for(int i =0;i< h;i++) cin>> a[i];
	for(int i =0;i< h;i++){
		for(int j =0;j< w;j++){
			if(dfs(i,j)) count++;	
		}
	}
	cout<< count<<endl;
}
 
int main() {
    solve();
    return 0;
}
