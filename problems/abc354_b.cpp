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
	int n; cin>> n;
	vector<string> a;
	int sum =0;
	for(int i = 0;i< n;i++){
		string x; int y;
		cin>> x >> y;
		a.push_back(x);
		sum += y%n;
		sum%=n;
	}
	sort(a.begin(), a.end());
	cout<< a[sum]<<endl;
}
 
int main() {
    solve();
    return 0;
}
