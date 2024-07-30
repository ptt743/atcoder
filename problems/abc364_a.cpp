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
	vector<string> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	int count =1;
	for(int i =1;i< n;i++){
		count++;
		if(a[i]==a[i-1] && a[i]=="sweet") break;
	}
	if( count==n) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
