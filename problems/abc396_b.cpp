#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int q;
	cin>> q;
	stack<int> st;
	for(int i = 99;i>=0;i--) st.push(0);
	while(q--){
		int t; cin>> t;
		if(t==1){
			int x; cin>> x;
			st.push(x);
		}
		else {
			cout<< st.top()<<endl;
			st.pop();
		}
	}
}
 
int main() {
    solve();
    return 0;
}
