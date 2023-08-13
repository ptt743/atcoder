#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n ;
	cin>> n;
	vector<pair<int, set<int>>> a;
	for(int i =0;i< n;i++){
		int c;
		cin>> c;
		set<int> b;
		for(int j =0;j< c;j++) {
			int t;
			cin>> t;
			b.insert(t);
		}
		a.push_back(make_pair(c,b));
	}
	
	int x;
	cin>> x;
	int max_val = INT_MAX;
	vector<pair<int,int>> result;
	for(int i =0;i< n;i++){
		if(a[i].second.find(x)!=a[i].second.end() && a[i].first<=max_val){
			max_val = a[i].first;
			result.push_back(make_pair(i, max_val));
		}
	}
	vector<int> ans;
	for( int i =0;i< result.size();i++){
	    if(result[i].second == max_val) ans.push_back(result[i].first);
	}
	cout<< ans.size()<<endl;
	for(int val : ans) cout<< val +1 <<" ";
	cout<<endl;

}
 
int main() {
    solve();
    return 0;
}
