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
	int n; cin>> n;
	vector<string> a(n+1,"");
	vector<string> b(n+1,"");
	for(int i =1;i<=n;i++){
		cin>> a[i];
	}
	int x=0,y=0;
	for(int i =1;i<=n;i++){
		cin>> b[i];
		for(int j =0;j<b[i].size(); j++){
			if(b[i][j]!=a[i][j]){
				x=i;
				y=j+1;
			}
		}
	}
	cout<< x << " "<<y<<endl;
}
 
int main() {
    solve();
    return 0;
}
