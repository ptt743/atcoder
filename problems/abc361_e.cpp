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

struct Node{
	long long x,y;
};
vector<Node>a[200000];
long long n,total,maxn,m,x,y,z;
void dfs(long long x,long long f,long long s){
	if(s>maxn){
		maxn=s;
		m=x;
	}
	for(int i=0;i<a[x].size();i++){
		if(a[x][i].x!=f){
			dfs(a[x][i].x,x,s+a[x][i].y);
		}
	}
}
int solve(){
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>x>>y>>z;
		total+=z;
		a[x].push_back({y,z});
		a[y].push_back({x,z});
	}
	dfs(1,0,0);dfs(m,0,0);
	cout<<total*2-maxn;
}

int main() {
    solve();
    return 0;
}
