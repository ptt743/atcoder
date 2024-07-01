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
	int n, m; cin>> n >> m;
	vector<int> a(m,0);
	vector<int> result(m,0);
	for(int i =0;i< m;i++) cin>> a[i];
	for(int i =0;i< n;i++){
		for(int j = 0;j<m;j++){
			int temp; cin>> temp;
			result[j]+=temp;
		}
	}
	bool check = true;
	for(int i =0;i< m;i++){
		if(result[i]< a[i]) check = false;
	}
	if(!check) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;

}
 
int main() {
    solve();
    return 0;
}
