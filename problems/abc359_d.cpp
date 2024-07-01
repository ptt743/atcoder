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
using i64 = long long;
constexpr i64 mod = 998244353;
void solve(){
	int n,k; cin>> n >> k;
	string s; cin>> s;
	s=" "+s;
	function<bool(int)> check=[&](int num)-> bool {
		int left = 0;
		int right = k-1;
		while(left<right){
			if(((num>> right)&1)!=((num>>left)&1)) return true;
			left++;
			right--;
		}
		return false;
	};
	vector<vector<int>> dp(n+1,vector<int>(1<<k,0));
	dp[0][0] = 1;
	for(int i =1;i<=n;i++){
		for(int j =0;j< (1<<k);j++){
			for(int l =0;l<=1;l++){
				if(s[i]!='?'&& s[i]!='A'+l) continue;
				int S = (j>>1)|((1<<(k-1))*l);
				if(check(S) || i<k){
					dp[i][S] = (dp[i][S] + dp[i-1][j])%mod;	
				}
			}

		}
	}
	i64 ans = 0;
	for (int i = 0; i < (1 << k); i++)
	{
		ans = (ans + dp[n][i]) % mod;
	}
	cout << ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
