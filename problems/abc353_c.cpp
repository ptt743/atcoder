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
	long long n;
	cin>> n;
	int M = 100000000;
	vector<long long> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	long long sum = 0;
	sort(a.begin(),a.end());
	for(int i =1;i<=n;i++) {
		sum += a[i]*(long long)(n-1);
	}
	int r  = n;
	for(int i =1;i<=n;i++){
		while(r>=1 && a[i]+a[r]>=M) r--;
		sum -= (long long) (n - max(r,i))*M;
		
	}
	cout<< sum << endl;
}
 
int main() {
    solve();
    return 0;
}
