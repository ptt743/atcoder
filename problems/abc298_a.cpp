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

void solve(){
	int n;
	cin>> n;
	string s;
	cin>> s;
	int countG = 0;
	int countP = 0;
	for(int i= 0;i< n;i++){
		if(s[i]=='o') countG++;
		if(s[i]=='x') countP++;
	}
	if(countG==0 || countP >=1) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
 
int main() {
    solve();
    return 0;
}
