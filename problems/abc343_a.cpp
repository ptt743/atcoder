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
	int a, b;
	cin >> a >> b;
	for(int i =0;i<=9;i++){
		if(i!=a+b){ 
			cout<< i<<endl;
			break;
		}

	}
}
 
int main() {
    solve();
    return 0;
}
