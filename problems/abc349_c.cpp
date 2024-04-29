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
	string s,t;
	cin>> s >> t;
	int left =0;
	int count =3;
	if(t[2]=='X') count--;
	for(int i =0;i<s.size();i++){
		if((int)(s[i] - 32) ==(int)t[left]){
			left++;
			count--;
		}
		if(count==0) break;
	}
	if(count==0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
