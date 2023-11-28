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
	int n, q;
	cin>> n >> q;
	vector<long long> a(n);
	vector<int> b(n+1);
	multiset<long long> st;
	for(int i =0;i< n;i++){ 
		cin>> a[i];
		if(a[i]<=n) b[a[i]]++;
	}
	for(int i =0;i<=n;i++)
		if(b[i]==0) st.insert(i);
	while(q--){
		int i; long long x;
		cin>> i >> x;
		i--;
		long long temp = a[i];
		a[i] = x;
		if(temp<=n){
			b[temp]--;
			if(b[temp]==0) st.insert(temp);
		}
		if(x<=n){
			if(b[x]==0) st.erase(x);
			b[x]++;
		}
		cout<< *st.begin()<<endl;
	}
	
}
 
int main() {
    solve();
    return 0;
}
