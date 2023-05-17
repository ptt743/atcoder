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

void solve(){
	string s;
	cin>> s;
	int n  = s.size();
	map<char, vector<int>> mp;
	for(int i =0;i< n;i++){
		mp[s[i]].push_back(i+1);
	}
	if((mp['K'][0]> mp['R'][0] && mp['K'][0]<mp['R'][1]) && ((mp['B'][0] + mp['B'][1])%2==1)){
		cout<<"Yes"<<endl;		
	}
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
