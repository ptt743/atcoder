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
	string s, t;
	cin>> s;
	cin>> t;
	int left = 0;
	for(int i =0;i< t.size();i++){
		if(t[i] == s[left]){
			cout<< i+1 <<" ";
			left++;
		}
		if(left>=s.size()) break;
	}
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
