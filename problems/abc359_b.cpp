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
	vector<int> a(2*n);
	for(int i =0;i< 2*n;i++) cin>> a[i];
	int count = 0;
	for(int i =0;i< 2*n;i++){
		if(i+2<2*n && a[i] == a[i+2]) count++;
	}
	cout<< count<<endl;
}
 
int main() {
    solve();
    return 0;
}
