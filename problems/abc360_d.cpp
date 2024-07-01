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
	long long t; cin>> n >> t;
	string s; cin>> s;
	vector<long long> x(n);

	for(int i =0;i< n;i++) cin>> x[i];
	vector<pair<long long, int>> pairs;
	for(int i =0;i< n;i++){
		pairs.push_back(make_pair(x[i],i));
	}
	sort(pairs.begin(), pairs.end());
	vector<long long> positive;
	long long ans = 0;
	for(int i =0;i< n;i++){
		int index = pairs[i].second;
		long long value = pairs[i].first;
		if(s[index]=='1'){
			positive.push_back(value + t);
		} else {
			int newPos = value - t;
			int count = positive.end() - lower_bound(positive.begin(), positive.end(), newPos);
			ans+=count;
		}
	}
	cout<< ans << endl;
}
 
int main() {
    solve();
    return 0;
}
