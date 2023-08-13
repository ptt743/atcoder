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
	string s;
	int q;
	cin>> n;
	cin>> s;
	cin>> q;
	int last = 2;
	vector<bool> dp(n);
	while(q--){
		int t, i;
		char a;
		cin>> t>> i;
		cin>> a;
		if(t==2 || t == 3){ last = t; dp  = vector<bool>(n); continue;}
		else {s[i-1] = a; dp[i-1] = true;}
	}
	for(int i =0;i< n;i++){
		if(!dp[i]){
		if(last ==3){s[i] = toupper(s[i]);}
		else s[i] = tolower(s[i]);
		}
	}
	cout<< s<<endl;

}
 
int main() {
    solve();
    return 0;
}
