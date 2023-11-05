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
	long long b;
	cin>> b;
	if(b==1){
		cout<<b<<endl;
		return;
	}
	for(int i = 2; i<=18;i++){
		long long temp = b;
		int count =0;
		while(temp%i==0){
			temp/=i;
			count++;
		}
		if(count==i&&temp==1){
			cout<<i<<endl;
			return;
		}
	}
	cout<<"-1"<<endl;
}
 
int main() {
    solve();
    return 0;
}
