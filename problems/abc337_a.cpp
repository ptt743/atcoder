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
	int left =0, right =0;
	int n;
	cin>> n;
	for(int i =0;i< n;i++){
		int x,y;
		cin>> x >> y;
		left+=x;
		right+=y;
	}
	if(left>right) cout<<"Takahashi"<<endl;
	else if ( left < right) cout<<"Aoki"<<endl;
	else cout<<"Draw"<<endl;
}
 
int main() {
    solve();
    return 0;
}
