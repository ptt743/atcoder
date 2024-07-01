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
	int n,k; cin>> n >> k;
	vector<int> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	int count = k;
	int result =0;
	for(int i =1;i<=n;){
		if(count < a[i]){
			result+=1;
			count = k;
		} else if( count >= a[i]){
			count -=a[i];
			if(i==n) result+=1;
			i++;
		}
	}
	cout<< result <<endl;
}
 
int main() {
    solve();
    return 0;
}
