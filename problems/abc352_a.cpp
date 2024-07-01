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
	int n, x,y,z;
	cin>> n >> x >> y >> z;
	int xt = max(x,y);
	int yt = min(x,y);
	if(z<=xt && z>=yt) cout<< "Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main() {
    solve();
    return 0;
}
