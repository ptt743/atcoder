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
	int n; cin>> n;
	vector<long long> h(n+1);
	for(int i =1;i<=n;i++) cin>> h[i];
	long long ans = 1;
	vector<pair<long long, long long>> retangles;
	for(int i =1;i<=n;i++){
		int count =1;
		while(retangles.size()>0 && h[i] > retangles.back().first){
			auto & [first, second] = retangles.back();
			retangles.pop_back();
			ans -= first * second;
			count+= second;
		}
		ans+= h[i]* count;
		cout<< ans<<" ";
		retangles.push_back(make_pair(h[i], count));
	}

}
 
int main() {
    solve();
    return 0;
}
