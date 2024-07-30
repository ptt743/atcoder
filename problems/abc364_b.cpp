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
	int w, h;
	cin>> h >> w;
	int x,y;
	cin>> x >> y;
	vector<string> a(h+1,"");
	for(int i =1;i<=h; i++){
		string s; cin>> s;
		s= " "+ s;
		a[i] = s;
	}
	string s; cin>> s;
	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,1,-1};
	for(int i =0;i< s.size();i++){
		int tempx = x;
		int tempy = y;
		if(s[i]=='U') {
			tempx +=dx[1];
			tempy +=dy[1];
		} else if (s[i]=='D'){
			tempx +=dx[0];
			tempy +=dy[0];
		} else if(s[i]=='L'){
			tempx += dx[3];
			tempy += dy[3];
		} else {
			tempx += dx[2];
			tempy += dy[2];
		}
		if(tempx>0 && tempx <=h && tempy>0 && tempy <=w){
			if(a[tempx][tempy] !='#'){
				x = tempx;
				y = tempy;
			}
		}
	}
	cout<< x <<" "<<y<<endl;
}
 
int main() {
    solve();
    return 0;
}
