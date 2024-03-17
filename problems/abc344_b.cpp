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
	vector<int> a;
	while(true){
		int temp;
		cin>> temp;
		a.push_back(temp);
		if(temp==0) break;
	}
	for(int i = a.size()-1; i>=0;i--){
		cout<< a[i] <<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
