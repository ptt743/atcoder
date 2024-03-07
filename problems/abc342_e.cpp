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

struct infor{
	long long l,d,k,c;
	int a;
	infor(long long d1,long long d2, long long d3, long long d4, int a1){
		l = d1;
		d = d2;
		k = d3;
		c = d4;
		a = a1;
	}
};

struct option{
	bool operator()(pair<long long, int> &a, pair<long long, int> &b){
		return a.first < b.first;
	}
};

void solve(){
	int n,m;
	cin >> n >> m;
	vector<vector<infor>> adj( n+1, vector<infor> ());
	long long time  = 0;
	for(int i =0;i< m;i++){
		long long l,d,k,c;
		int a, b;
		cin>> l >> d >> k >> c >> a >> b;
		adj[b].push_back(infor(l,d,k,c,a));
		if(b==n){
			time  = max( time, l + (k-1)*d +c);
		}
	}
	priority_queue<pair<long long, int>, vector<pair<long long, int>>, option> qq;
	vector<long long> d(n+1,-1);
	qq.push( make_pair(time,n));
	while(!qq.empty()){
		pair<long long,int > top = qq.top();
		qq.pop();
		long long t = top.first;
		int index = top.second;
		for(int i =0;i< adj[index].size();i++){
			infor temp = adj[index][i];
			long long tp = min((t - temp.c - temp.l)/temp.d, temp.k -1)*temp.d + temp.l;
			if(tp > d[temp.a]){
				d[temp.a] = tp;
				qq.push(make_pair(tp, temp.a));
			}
		}
	}
	for(int i = 1;i<n;i++) {
		if(d[i]==-1) cout<<"Unreachable"<<endl;
		else cout<< d[i]<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
