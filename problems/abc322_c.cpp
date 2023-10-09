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
	int n, m;
	cin>> n >> m;
	vector<int> a(m);
	for(int i =0;i< m;i++) cin>> a[i];
	for(int i = 1; i<= n;i++){
		auto it = lower_bound(a.begin(), a.end(),i);
		int ans = 0;
		if(it!=a.end()){
			ans = *it - i;
		}
		cout<< ans << endl;
	}
}
 
int main() {
    solve();
    return 0;
}
