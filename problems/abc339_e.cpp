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

using namespace std;
#define ll long long 
const int N = 1e6 + 10;

int n,m;
int t[N*4];

int qry(int nl,int nr,int x,int l,int r){
	 if(nl<=l&&r<=nr)return t[x];
    int mid=(l+r)>>1,res=0;
    if(nl<=mid) res=max(res,qry(nl,nr,x*2,l,mid));
    if(nr>mid) res=max(res,qry(nl,nr,x*2+1,mid+1,r));
    return res;
}

void upd(int idx,int x,int l,int r,int val){
	if(l==r){
        t[x]=max(t[x],val);
        return;
    }
    ll mid=(l+r)>>1;
    if(idx<=mid)upd(idx,x*2,l,mid,val);
    else upd(idx,x*2+1,mid+1,r,val);
    t[x]=max(t[x*2],t[x*2+1]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		int l=max(0,x-m) , r=x+m;
		int dp=qry(l,r,1,0,1e6)+1;
		upd(x,1,0,1e6,dp);
	}
	cout<<qry(0,1e6,1,0,1e6);
	return 0;
}
