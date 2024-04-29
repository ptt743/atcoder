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
	long long n, a,b; cin>> n>> a >> b;
	vector<long long> p(n);
	long long days= a+b;
	for(int i =0;i< n;i++){
		cin>> p[i];
		p[i]%=days;
	}
	sort(p.begin(), p.end());
	bool check = false;
	for(int i =0;i<n;i++){
		if(i<n-1 && p[i+1] - p[i] > b) check = true;
		else if( i== n-1 && p[0] - p[n-1] + days >b) check =  true;
	}
	if(check) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
