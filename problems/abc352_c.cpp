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
	int n; cin>>n;
	long long maxa = 0;
	long long sumb = 0;
	for(int i =0;i< n;i++){
		long long a,b; cin>> a >> b;
		maxa = max(maxa,abs(b-a));
		sumb += a;
	}
	cout<< sumb+ maxa<<endl;
}
 
int main() {
    solve();
    return 0;
}
