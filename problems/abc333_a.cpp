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
	string result = "";
	for(int i=0;i< n;i++) result+=to_string(n);
	cout<< result<<endl;
}
 
int main() {
    solve();
    return 0;
}
