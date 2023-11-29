#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<cmath>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	long long n;
	cin>> n;
	long long ans = n;
	for(int i = 0; i<=sqrt(n);i++){
		long long y = sqrt(n - (long long)i*i);
		long long temp = y;
		ans = min(ans, abs(i*i + temp*temp - n));
		temp = y +1;
		ans = min(ans,abs(i*i + temp*temp - n));
		temp = y-1;
		ans = min(ans, abs(i*i + temp*temp -n));
	}
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
