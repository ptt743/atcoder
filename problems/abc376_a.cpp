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
	int n, c; cin>> n >> c;
	int ans = 1;
	int first ; cin>> first;
	for(int i =1;i<n;i++){
		int t; cin>> t;
		if(t- first >=c) ans++, first = t;
	}
	cout<< ans<<endl;

}
 
int main() {
    solve();
    return 0;
}
