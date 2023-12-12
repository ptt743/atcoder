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
	int n, m;
	cin>> n >> m;
	string s;
	cin>> s;
	int logo =0;
	int nologo = 0;
	int result = 0;
	for(int i =0;i<=n;i++){
		if(s[i]=='0' || i ==n){
			int temp = m - nologo;
			if(temp<0) logo += nologo - m;
			result = max(result, logo);
			nologo = 0;
			logo = 0;
		} else if( s[i]=='1') nologo++;
		else logo++;
	}
	cout<< result << endl;
}
 
int main() {
    solve();
    return 0;
}
