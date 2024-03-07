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
	int begin = 1;
	string result = "";
	for(int i =0;i< 2*n+1;i++){
		result += (begin + '0');
		begin = 1 - begin;
	}
	cout<< result<< endl;
}
 
int main() {
    solve();
    return 0;
}
