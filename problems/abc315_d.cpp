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
	cin>> h>> w;
	vector<vector<char>> c(h, vector<char>(w));
	for(int i =0;i< h;i++){
		for(int j =0;j< w;j++){
			cin>> c[i][j];
		}
	}
	vector<vector<int>> x(h, vector<int>(26));
	vector<vector<int>> y(w, vector<int> (26));
	for(int i =0;i< h;i++){
		for(int j =0;j< w;j++){
			x[i][c[i][j] - 'a']++;
			y[j][c[i][j] - 'a']++;
		}
	}
	for(int i =0;i< h;i++){
		for(int j =0;j< w;j++){
			if(x[i][c[i][j]-'a']>=2){
				c[i][j] = '.';
				y[j][c[i][j]-'a']--;
			}
		}
	}
	for(int i =0;i< h;i++){
		for(int j =0;j<w;j++){
			if(c[i][j]=='.') continue;
			if(y[j][c[i][j]-'a']>=2){
				c[i][j]='.';

			}
		}
	}
	int count =0;
	for(int i =0;i<h;i++)
		for(int j =0;j<w;j++){
			if(c[i][j]!='.') count++;
		}
	cout<< count<<endl;
}
 
int main() {
    solve();
    return 0;
}
