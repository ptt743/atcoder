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
	int n, q;
	cin>> n >> q;
	int l = 1, r=2;
	int ans = 0;
	while(q--){
		char c;int i;
		cin>> c >> i;
		if(c=='L'){
			int temp = l;
			int left = min(temp,i);
			int right = max(temp,i);
			if( left < r && r< right){
				ans+= n - ( right - left);
			} else 	ans += right - left;
			l = i;
		} else {
			int temp = r;
			int left = min(temp,i);
			int right = max(temp,i);
			if(left < l  && l < right){
				ans += n - ( right - left);
			} else ans += right - left;
			r = i;
		}
	}
	cout<< ans<<endl;

}
 
int main() {
    solve();
    return 0;
}
