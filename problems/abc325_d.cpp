#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<functional>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n ;
	cin>> n;
	vector<pair<long long,long long>> arr;
	for(int i =0;i< n;i++){
		long long s, d;
		cin>> s >> d;
		arr.push_back(make_pair(s,s+d));
	}
	sort(arr.begin(), arr.end());
	int it =0;
	long long begin =0;
	priority_queue<long long,vector<long long>, greater<long long>> qq;
	int ans = 0;
	for(long long i =0;;i++){
		if(qq.empty()){
			if(it==n) break;
			i = arr[it].first;
		}
		while(it<n && arr[it].first == i){
			qq.push(arr[it++].second);
		}
		while(!qq.empty() && qq.top()<i) qq.pop();

		if(!qq.empty()){
			ans++;
			qq.pop();
		}
	}
	cout<<ans<<endl;
	
}
 
int main() {
    solve();
    return 0;
}
