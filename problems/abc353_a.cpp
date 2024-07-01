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
	int n ; cin>> n;
	vector<int> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	bool check = false;
	for(int i = 2;i<=n;i++){
		if(a[i]>a[1]){
			check = true;
			cout<<i<<endl;
			break;
		}
	}
	if(!check) cout<<"-1"<<endl;
}
 
int main() {
    solve();
    return 0;
}
