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
	int n,l;
	cin >> n >> l;
	int count =0;
	for(int i =0;i< n;i++) {
		int a;
		cin>> a;
		if(a >=l) count++;
	}
	cout<< count<< endl;
}
 
int main() {
    solve();
    return 0;
}
