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
long long pow10(int n){
	if(n==0) return 1ll;
	long long result = 1;
	for(int i =1;i<=n;i++) result*=10;
	return result;
}
void solve(){
	long long n; cin>> n;
	if(n<=10){ 
	   cout<<n-1<<endl;
	   return;
	}
	n-=1;
	for(int d = 1;;d++){
		int x = (d+1)/2;
		long long powTen = pow10(x-1);
		if(n<= 9*powTen){
			long long begin = pow10(x-1) + n -1;
			string prefix = to_string(begin);
			if(d%2!=0) begin /=10;
			string suffix = to_string(begin);
			reverse(suffix.begin(), suffix.end());
			string result = prefix + suffix;
			cout << result <<endl;
			break;
		} else {
			n-= 9*powTen;
		}
	}

}
 
int main() {
    solve();
    return 0;
}
