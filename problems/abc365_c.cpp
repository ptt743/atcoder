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
	long long n, m;
	cin>> n >> m;
	vector<long long >a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	long long left = 0, right  = m;
	while( left <= right){
		long long mid = (left + right)/2;
		long long sum =0;
		for(int i =0;i< n;i++){
			sum += min(a[i], mid);
		}
		if(sum> m) right = mid-1;
		else left = mid+1;
	}
	if(right == m){
		cout<<"infinite"<<endl;
		return;
	}
	cout<< right << endl;

}
 
int main() {
    solve();
    return 0;
}
