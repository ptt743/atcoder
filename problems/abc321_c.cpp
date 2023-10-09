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
	long long n,m,p;
	cin>> n>> m>>p;
	vector<long long> a(n), b(m);
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< m;i++) cin>> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	long long count = 0;
	vector<long long> c(m);
	c[0] = b[0];
	for(int i =1;i<m;i++) c[i] = c[i-1] + b[i];
	
	for(int i =0;i< n;i++){
		int index = lower_bound(b.begin(), b.end(), p - a[i]) - b.begin();
		count += (index>0?(a[i]*index+(c[index-1])):0) + (m - index)*p;
	}
	cout<< count<<endl;
}
 
int main() {
    solve();
    return 0;
}
