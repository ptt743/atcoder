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
	int n; cin>> n;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];

	int m; cin>> m;
	vector<long long> b(m);
	for(int i =0;i< m;i++) cin>> b[i];

	int l; cin>> l;
	vector<long long> c(l);
	for(int i=0;i< l;i++) cin>> c[i];

	map<string, bool > mp;
	for(int i =0;i< n;i++)
		for(int j =0;j<m;j++)
			for(int k =0;k<l;k++){
				long long sum = a[i] + b[j] + c[k];
				string  temp = to_string(sum);
				mp[temp]= true;
			}
	int q; cin>> q;
	for(int i =0;i< q;i++) {
		long long temp; cin>> temp;
		if(mp[to_string(temp)]){
			cout<<"Yes"<<endl;
		} else cout<<"No"<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
