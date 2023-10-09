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
	int n, x;
	cin>> n >> x;
	vector<int> a(n-1);
	int sum =0;
	int min_temp = 101;
	int max_temp = -1;
	for(int i =0;i< n-1;i++){
		cin>> a[i];
		sum += a[i];
		min_temp = min(min_temp,a[i]);
		max_temp = max(max_temp, a[i]);
	}
	int ans = 101;
	if(sum - max_temp >= x) 
		ans = min(ans,0);
	if(sum - min_temp >=x) ans = min(ans, max_temp);
	int temp = x - (sum - (min_temp+ max_temp));
	if( temp>=0 && temp <=100 && temp >= min_temp && temp <= max_temp) ans = min(ans,temp);

	if(ans == 101) cout<< "-1"<<endl;
	else cout<< ans<<endl;

}
 
int main() {
    solve();
    return 0;
}
