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
	long long  n, d, p;
	cin>> n >> d>> p;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	int count =0;
	long long temp = 0;
	long long ans = 0;
	for(int i =n-1;i>=0;i--){
		if(count< d){
			temp+=a[i];
			count++;
		}
		if(count>=d || i==0){
			count =0;
			if(temp> p) ans+=p;
			else ans += temp;
			temp=0;

		}
	}
	cout<< ans<< endl;
}
 
int main() {
    solve();
    return 0;
}
