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
	vector<vector<bool>> a(n,vector<bool>(n,false));
	for(int i =0;i< n;i++){
		for( int j =0;j< n;j++){
			char t; cin>> t;
			a[i][j] = (t=='1')?1:0;
		}
	}


}
 
int main() {
    solve();
    return 0;
}
