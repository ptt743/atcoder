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
	int n;
	cin>> n;
	long long x,y;
	cin>> x >> y;
	vector<long long> a(n,0), b(n,0);
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< n;i++) cin>> b[i];
	sort(a.begin(),a.end(),std::greater<int>());
	sort(b.begin(), b.end(),std::greater<int>());
	long long counta=0;
	int sza=0;
	while(sza<n && x>=0 ){
		x-=a[sza];
		sza++;
	}
	long long countb = 0;
	int szb = 0;
	while(szb<n && y>=0){
		y-=b[szb];
		szb++;
	}
	cout<<min(sza,szb)<<endl;
}
 
int main() {
    solve();
    return 0;
}
