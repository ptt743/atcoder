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

typedef unsigned long long ll;
void solve(){
	int n,sz;
	long long x,y,ans=0;
	vector<long long>a[4];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if((x+y)%2==0){
			a[0].push_back(x+y);
			a[1].push_back(x-y);
		}
		else{
			a[2].push_back(x+y);
			a[3].push_back(x-y);
		}
	}
	for(int i=0;i<4;i++){
		sort(a[i].begin(),a[i].end());
		sz=a[i].size();
		for(int j=0;j<sz;j++)ans+=a[i][j]*(2*j+1-sz);
	}
	cout<<(ans/2)<<endl;
	return 0;
}
 
int main() {
    solve();
    return 0;
}
