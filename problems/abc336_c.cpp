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
	long long n;
	cin>> n;
	n--;
	vector<int> ans;
	while(n>0){
		ans.push_back(n%5);
		n/=5;
	}
	if(ans.empty()) ans.push_back(0);
	reverse(ans.begin(),ans.end());
	for(int i =0;i< ans.size();i++){
		cout<< ans[i]*2;
	}
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
