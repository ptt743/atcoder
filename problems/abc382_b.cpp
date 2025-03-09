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
	int n,d;
	cin>> n >> d;
	string s; cin>> s;
	stack<int> st;
	for(int i = n-1;i>=0;i--){
		if(s[i]=='@') st.push(i);
	}
	while(d-- && !st.empty()){
		st.pop();
	}
	int count = st.size();
	for(int i =0;i< s.size();i++){
		if(s[i]=='@' && count>0){
			cout<< "@";
			count--;
		} else cout<< ".";
	}
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
