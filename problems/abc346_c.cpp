#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	long long n,k;
	cin>> n >> k;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	set<long long> st;

	long long sum  = ((k+1)*k)/2;
	for(int i =0;i< n;i++){
		if( a[i]>=1 && a[i]<=k && st.find(a[i])==st.end()){
			sum -=a[i];
			st.insert(a[i]);
		}
	}
	cout<< sum << endl;
}
 
int main() {
    solve();
    return 0;
}
