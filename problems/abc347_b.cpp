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
	string s; cin>> s;
	int n = s.size();
	set<string> st;
	for(int i =0;i<n;i++){
		for(int j =i;j<n;j++){
			string temp = s.substr(i,j-i+1);
			st.insert(temp);
		}
	}
	cout<< st.size()<<endl;
}
 
int main() {
    solve();
    return 0;
}
