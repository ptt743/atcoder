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
	int k,g,m;
	cin>> k >> g >> m;
	int sum =0;
	int glass = 0, mug =0;
	for(int i =0;i< k;i++){
		if(glass == g){glass = 0;continue;}
		if(mug==0) {mug = m;continue;}
		if( mug < (g - glass)){
			glass += mug;
			mug =0;

		} else {
			mug -= g - glass;
			glass+= g- glass;
		}
	}
	cout << glass << " "<< mug<<endl;
}
 
int main() {
    solve();
    return 0;
}
