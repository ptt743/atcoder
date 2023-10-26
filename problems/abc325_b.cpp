#include <climits>
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
	int n ;
	cin>> n;
	vector<long long> count(24,0);
	vector<int> a(n);
	for(int i =0;i< n;i++) {
		long long w;
		int x;
		cin >> w >> x;
		count[x]+=w;
		a[i] = x;
	}
	long long ans = INT_MIN;
	for(int i =0;i< n;i++){
		long long temp = 0;
		for(int k =0;k<9;k++){
			temp += count[(a[i]+k)%24];
		}
		ans = max(ans, temp);
	}
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
