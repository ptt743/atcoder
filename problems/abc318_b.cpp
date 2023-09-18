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
	int ans = 0;
	int n ;
	int a,b,c,d;
	cin>> n;
	vector<vector<bool>> visited(101, vector<bool>(101, false));
	while(n--){
		cin>> a>> b>> c >>d;
		for(int i = a;i<b;i++){
			for( int j =c ;j<d;j++){
				if(visited[i][j]==false){
					ans++;
					visited[i][j] = true;
				}
			}
		}
	}
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
