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
	int n, h, x;
	cin>> n>> h>> x;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	int index = lower_bound(a.begin(), a.end(), x - h) - a.begin();
	cout<< index+1<<endl;
}
 
int main() {
    solve();
    return 0;
}
