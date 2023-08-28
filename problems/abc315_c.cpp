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
	vector<pair<long long,int>> a;
	for(int i =0;i< n;i++) {
		int f; long long s;
		cin>> f>> s;
		a.push_back(make_pair(s,f));
	}
	sort(a.begin(),a.end());
	long long ans = 0;
	vector<long long> temp(n+1);
	for(int i =0;i< n;i++){
		ans  = max(ans, a[i].first + temp[a[i].second]/2);
		temp[a[i].second] = a[i].first;	
	}
	sort(temp.begin(), temp.end());
	ans = max(ans, temp[n] + temp[n-1]);
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
