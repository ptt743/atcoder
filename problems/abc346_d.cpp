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
	int n ; cin>> n;
	string s; cin>> s;
	s = " "+ s;
	vector<long long> c(n+1);
	for(int i =1;i<=n;i++) cin>> c[i];
	vector<vector<long long>> dp(n+1, vector<long long>(2,0));
	for(int i =1;i<=n;i++){
		dp[i][0] = dp[i-1][1];
		dp[i][1] = dp[i-1][0];
		if(s[i]=='1') dp[i][0]+=c[i];
		if(s[i]=='0') dp[i][1]+=c[i];
	}
	long long ans = n*1e9;
	for(int i=1;i<n;i++){
		//0 
		long long temp = 0;
		if(s[i]!='0') temp+=c[i];
		if(s[i+1]!='0') temp+=c[i+1];
		temp+= dp[i-1][1];
		if((n-i+1)%2==0) temp+= dp[n][0] - dp[i+1][0];
		else temp += dp[n][1] - dp[i+1][0];
		ans = min(ans, temp);
		//1
		temp=0;
		if(s[i]!='1') temp +=c[i];
		if(s[i+1]!='1') temp+=c[i+1];
		temp+=dp[i-1][0];
		if((n-i+1)%2==0) temp+= dp[n][1] - dp[i+1][1];
		else temp += dp[n][0] - dp[i+1][1];
		ans = min(ans, temp);
	}
	cout<< ans<<endl;
}
 
int main() {
    solve();
    return 0;
}
