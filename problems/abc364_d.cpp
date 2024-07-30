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
	int n , q;
	cin >> n >> q;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	for(int i =0;i< q;i++){
		long long left = 0, right = 1e9;
		long long b; int k;
		cin>> b >> k;
		while(left <= right){
			long long mid = (left + right)/2;
			int r= upper_bound(a.begin(), a.end(), b+ mid) - a.begin();
			int l = lower_bound(a.begin(), a.end(), b - mid) - a.begin();
			if( r - l>=k) right = mid -1;
			else left = mid +1;
		}
		cout<< left << endl;
	}
}
 
int main() {
    solve();
    return 0;
}
