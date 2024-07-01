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
	long long h; cin>> h;
	long long left =0, right = 30;
	while(left<=right){
		long long mid = (left+ right)/2;
		long long temp = 1<< mid;
		if(temp>h)right=mid-1;
		if(temp<=h)left = mid+1;
	}
	long long temp = 1<<left;
	if(temp-1>h) left--;
	cout<< left+1 <<endl;
}
 
int main() {
    solve();
    return 0;
}
