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
struct option{
	bool operator()(pair<int,int> & a, pair<int,int> &b){
		return a.first < b.first || ((a.first== b.first) && a.second > b.second);
	}
};

void solve(){
	priority_queue<pair<int,int>, vector<pair<int,int>>, option> qq;
	int n, m;
	cin>> n >> m;
	vector<int> a(n+1);
	for(int i =0;i< m;i++){
		int t; cin>> t;
		a[t]++;
		qq.push(make_pair(a[t],t));
		cout<< qq.top().second<<endl;
	}

}
 
int main() {
    solve();
    return 0;
}
