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
	int n, l ,r;
	cin>> n >> l >> r;
	int count = r;
	for(int i =1;i<=n;i++){
		if(i<l || i>r ) cout<< i <<" ";
		else {
			cout<< count<< " ";
			count--;
		}
	}
}
 
int main() {
    solve();
    return 0;
}
