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
	int n;
	cin>> n;
	vector<int> a(n+1);
	for(int i =1;i<=n;i++) cin>> a[i];
	vector<int> path(n+1,0);
	int index = 0;
	for(int i =1;i<=n;i++){
		if(a[i]==-1) index = i;
		else path[a[i]] = i;
	}
	while(index!=0){
	 	cout<< index<<" ";
		index  = path[index];
	}
	cout<<endl;

}
 
int main() {
    solve();
    return 0;
}
