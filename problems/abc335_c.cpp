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
	int n,q;
	cin >> n >> q;
	vector<pair<int,int>> trace;
	for(int i =n ;i>=1;i--){
		trace.push_back(make_pair(i,0));
	}
	while(q--){
		int t;
		cin>> t;
		if( t==1){
			char d; cin>> d;
			pair<int,int> temp = trace[trace.size()-1];
			if(d=='R') temp.first++;
			if(d=='L') temp.first--;
			if(d=='U') temp.second++;
			if(d=='D') temp.second--;
			trace.push_back(temp);
		} else {
			int p; cin>> p;
			cout<< trace[trace.size() -p].first <<" "<<trace[trace.size()-p].second<<endl;
		}
	}
}
 
int main() {
    solve();
    return 0;
}
