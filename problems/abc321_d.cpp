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
	vector<long long> a;
	for(int i =2;i< (1<<10) ; i++){
		long long num =0;
		for(int j=9;j>=0;j--){
			if(i&(1<<j))num=num*10 + j;
		}
		a.push_back(num);
	}
	sort(a.begin(),a.end());
	cout<< a[n-1]<<endl;
}
 
int main() {
    solve();
    return 0;
}
