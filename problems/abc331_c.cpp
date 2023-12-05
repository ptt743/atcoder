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
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	if(n==1){ 
		cout<<"0"<<endl;
		return;
	}
	vector<long long> b(a);
	sort(b.begin(), b.end());
	vector<long long> result(n,0);
	for(int i =n-2;i>=0;i--){
		result[i] = result[i+1] + b[i+1];
	}
	for(int i= 0;i< n;i++){
		int index = upper_bound(b.begin(), b.end(),a[i]) - b.begin()-1;
		cout<<result[index]<<" ";
	}
	
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
