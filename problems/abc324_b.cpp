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
	unsigned long long n;
	cin>> n;
	while(n%2==0) n/=2;
	while(n%3==0) n/=3;
	if(n==1) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

}
 
int main() {
    solve();
    return 0;
}
