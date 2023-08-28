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
	int n ;
	cin>> n;
	vector<int> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	sort(a.begin(), a.end());
	int first = a[0];
	for(int i =1;i< n;i++){
		if(a[i]!=a[i-1]+1) first = a[i];
	}
	cout<< first - 1<<endl;
}
 
int main() {
    solve();
    return 0;
}
