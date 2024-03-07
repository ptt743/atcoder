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
	cin>> n;
	vector<long long> a(n);
	vector<long long> s(n-1), t(n-1);
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< n-1;i++){
		cin >> s[i] >> t[i];
	}

	for(int i =1;i< n ; i++){
		a[i] += (t[i-1] * (a[i-1]/s[i-1])); 
	}
	cout<< a[n-1]<<endl;
}
 
int main() {
    solve();
    return 0;
}
