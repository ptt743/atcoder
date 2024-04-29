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
	int n ; cin>> n;
	vector<long long> a(n+1);
	stack<int> st;
	for(int i =1;i<=n;i++){
		cin>> a[i];
		if(!st.empty() && st.top() == a[i]){
			long long temp = a[i];
			while(!st.empty() && st.top()== temp){
				st.pop();
			 	temp = temp+1;
			}
		st.push(temp);
		} else st.push(a[i]);
	}
	cout<< st.size()<<endl;
}
 
int main() {
    solve();
    return 0;
}
