#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n;
	cin>> n;
	set<int> st;
	for(int i =0;i< n;i++){
		int t;
		cin>> t;
		st.insert(t);
	}
	st.erase(*st.rbegin());
	cout<< *st.rbegin()<<endl;
}
 
int main() {
    solve();
    return 0;
}
