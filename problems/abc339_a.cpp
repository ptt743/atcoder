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
	string s;
	cin>> s;
	int n = s.size();
	string temp = "";
	string result = "";
	for(int i =0;i<= n;i++){
		if(i<n && s[i]!='.'){
			temp += s[i];
		} else {
			result  = temp;
			temp = "";
		}
	}
	cout<< result << endl;

}
 
int main() {
    solve();
    return 0;
}
