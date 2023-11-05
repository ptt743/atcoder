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
	int x, y;
	cin>> x >> y;
	bool check = false;
	if(x-y>=0){
		if (x-y<=3) check = true;
	} else{
		if(x-y>=-2) check = true;
	}
	if(check) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
