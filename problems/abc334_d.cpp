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
	int n,q;
	cin>> n >> q;
	vector<long long> a(n);
	for(int i =0;i< n;i++)  cin>> a[i];

	sort(a.begin(), a.end());
	for(int i =1;i< n;i++) a[i] +=a[i-1];
	while(q--){
		long long s;
		cin>> s;
		int index = upper_bound(a.begin(), a.end(), s) - a.begin();
		cout<< (index -1)+1<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
