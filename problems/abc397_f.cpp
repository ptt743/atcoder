#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	vector<int> dp(n, 0);
    	vector<int> suml(n), sumr(n);
	//left
	int now = 0;
	vector<int> vis(n + 1, 0);
    	for (int i = 0; i < n; ++i) {
        	if (++vis[a[i]] == 1) {
            		now++;
        	}
        	suml[i] = now;
    	}
	//right
	vis = vector<int>(n + 1, 0);
    	now = 0;
    	for (int i = n - 1; i >= 0; --i) {
        	if (++vis[a[i]] == 1) {
            		now++;
        	}
        	sumr[i] = now;
    	}


}
 
int main() {
    solve();
    return 0;
}
