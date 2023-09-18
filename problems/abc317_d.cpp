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
	vector<long long> x(n), y(n),z(n);
	long long sum =0;
	for(int i =0;i< n;i++){
		cin>> x[i]>> y[i] >> z[i];
		sum += z[i];
	}

	vector<long long> res( sum+1,1e18);
	res[0]=0;
	for(int j=0;j<n;j++){
		for(int i = sum; i>=z[j];i--){
			if(i >= z[j]){
				long long add = 0;
				if(y[j]> x[j]) add = ((y[j] + x[j])/2+1)- x[j];
				res[i] = min(res[i],res[i - z[j] ] + add );
			}
		}
	}
	long long ans = 1e18;
	for(int i = sum/2+1; i<=sum;i++) ans = min(ans, res[i]);
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
