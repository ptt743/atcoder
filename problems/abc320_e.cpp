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
	int n,m;
	cin>> n>> m;
	priority_queue<int, vector<int>, greater<int>> index;
	priority_queue< pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> time;
	vector<long long> ans(n);
	for(int i= 0;i< n;i++) index.push(i);
	for(int i =0;i< m;i++){
		long long t,w,s;
		cin>> t >> w >> s;
		while(!time.empty() && time.top().first <= t){
			index.push(time.top().second);
			time.pop();
		}
		if(!index.empty()){
		int ind = index.top();
		ans[index.top()]+=w;
		index.pop();
		time.push(make_pair(t+s,ind));
		}
	}
	for(int i =0;i< n;i++) cout<< ans[i]<< endl;
}
 
int main() {
    solve();
    return 0;
}
