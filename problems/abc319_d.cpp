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
	int n, m;
	cin>> n>> m;
	vector<long long> l(n);
	long long max_value = 0;
	for(int i =0;i< n;i++) cin>> l[i], max_value = max(l[i],max_value);
	long long len = l[0];
	for(int i =1;i< n;i++) l[i]++, len+=l[i];
	long long left = max_value, right = len;
	while(left<= right) {
		long long mid = left + ( right - left)/2;
		int count =0;
		long long sum =0;
		for(int i =0;i< n;i++){
			if(sum+l[i] <= mid ){
				sum+= l[i];
			} else count++,sum =l[i]-1;
			if(i==n-1 && sum <= mid) count++;
		}
		if(count> m) left = mid+1;
		else right = mid-1;
	}
	cout<< left<< endl;

}
 
int main() {
    solve();
    return 0;
}
