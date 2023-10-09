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
	bool check = true;
	for(int i =0;i< s.size()-1;i++){
		int front = s[i] - '0';
		int behind = s[i+1] - '0';
		if(behind >= front) {
			check = false;
			break;
		}
	}
	if(!check) cout<< "No"<<endl;
	else cout<< "Yes"<<endl;
}
 
int main() {
    solve();
    return 0;
}
