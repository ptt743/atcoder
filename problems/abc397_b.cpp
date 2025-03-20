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
	string s;
	cin>> s;
	int n = s.size();
	int count = 1;
	int i =0;
	int result =0;
	while(i<n){
		if(count%2!=0 && s[i]!='i') result++;
		else if(count%2!=0 && s[i]=='i') i++;

		else if(count%2==0 && s[i]!='o') result++;
		else if(count%2==0 && s[i]=='o') i++;
		count++;
	}
	if((n+ result)%2==1) result++;
	cout<< result<<endl;
}
 
int main() {
    solve();
    return 0;
}
