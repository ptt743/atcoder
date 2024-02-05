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
	int count =0;
	while(n>0){
		int temp = n%2;
		n=n/2;
		if(temp==0) count++;
		else break;
	}
	cout<< count << endl;
}
 
int main() {
    solve();
    return 0;
}
