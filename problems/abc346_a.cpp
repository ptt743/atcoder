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
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>>a[i];
	for(int i =1;i< n;i++){
		cout<< a[i]*a[i-1] <<" ";
	}
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
