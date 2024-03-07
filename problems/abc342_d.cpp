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
	long long n; cin>> n;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin >> a[i];
	long long ans =0;
	unordered_map<long long ,long long> mp;
	for(int i =0;i< n;i++){
		if(a[i]==0){
			ans +=i;
			mp[0]++
			continue;
		}
		long long x = 1;
		for(int j =2;j*j<=a[i];j++){
			bool fal = false;
			while(a[i]%j==0){
				a[i]/=j;
				fal = !fal;
			}
			if(fal) x*=j;
		}
		x*= a[i];
		ans+=mp[0];
		ans+=mp[x];
		mp[x]++;
	}
	cout<< ans << endl;
}
 
int main() {
    solve();
    return 0;
}
