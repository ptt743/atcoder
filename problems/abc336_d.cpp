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
	int n;
	cin>>n;
	vector<int> a(n+1,0);

	for(int i =1;i<=n;i++) cin>> a[i];
	vector<int> l(n+2), r(n+2);
	for(int i =1;i<=n;i++)
		l[i] = min(a[i], l[i-1]+1);
	for(int i = n;i>=1;i--)
		r[i] = min(a[i], r[i+1] +1);
	int ans = 0;
	for(int i =1;i<= n;i++) ans = max(min(l[i], r[i]), ans);
	cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
