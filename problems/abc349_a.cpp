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
	vector<int> a(n-1);
	int sum  = 0;
	for(int i =0;i< n-1;i++) {
		cin>> a[i];
		sum += a[i];
	}
	cout<< 0 - sum << endl;

}
 
int main() {
    solve();
    return 0;
}
