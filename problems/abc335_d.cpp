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
	int n;
	cin>> n;
	vector<vector<string>> ma(n+1, vector<string> (n+1,"-1"));
	ma[(n+1)/2][(n+1)/2]= "T";
	char flag = 'R';
	ma[1][1] = "1";
	int x =1, y =1;
	int dx[] ={0,0, -1, 1};
	int dy[] ={-1,1,0,0};
	char di[] = {'D','U','L','R'};
	for(int i = 2; i<= n*n-1; i++){
		int xp = x;
		int yp= y;
		if(flag =='L') x--;
		if(flag == 'R')x++;
		if(flag == 'U') y++;
		if(flag == 'D') y--;
		if( x<=0 || x > n || y<=0 || y> n || ma[y][x] !="-1" ){
			x = xp;
			y = yp;
			for(int j =0;j< 4;j++){
				int ytemp = y + dy[j];
				int xtemp = x + dx[j];
				if( xtemp>0 && xtemp<=n && ytemp>0 && ytemp<=n && ma[ytemp][xtemp]=="-1"){
					flag = di[j];
					x = xtemp;
					y = ytemp;
					break;
				}
			}
		}
		ma[y][x] = to_string(i);
	}
	for(int i =1;i<=n;i++){
		for(int j =1;j<=n;j++) cout<< ma[i][j]<<" ";
		cout<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
