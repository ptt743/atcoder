#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	long long n; cin >> n;
	// y^3 - x^3 = n;
	// n>=0 => y = x + k;
	// k^3 + 3k^2x + 3kx^2  = n
	// k^2 + 3kx + 3x^2 = n/k
	for(long long k = 1;k*k*k <= n;k++){
	   if(n%k!=0) continue;
	   long long a = 3;
	   long long b = 3*k;
	   long long c = k*k - n/k;
	   long long left = 0;
	   long long right = 1e6+1;
	   while(left<=right){
		long long mid = (left + right)/2;
		if(a*mid*mid + b*mid + c >=0) right = mid-1;
		else left = mid+1;
	   }
	   cout<< left <<endl;
	   if(a*left*left + b*left + c==0){
		cout<< k + left <<" "<<left<<endl;
	   	return;
	   }
	}
	cout<<"-1"<<endl;
}
 
int main() {
    solve();
    return 0;
}
