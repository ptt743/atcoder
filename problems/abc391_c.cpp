#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n,q;
	unordered_map<int,int> nest;
	unordered_map<int,int> count;
	cin>>n >> q;
	for(int i =1;i<=n;i++){
		nest[i] = i;
		count[i] = 1;
	}

	int sum = 0;
	while(q--){
		int t;
		cin>> t;
		if( t==1){
			int p , h;
			cin>> p >> h;
			int pre = nest[p];
			if(pre!=0){
				count[pre]--;
				if(count[pre]==1)sum--;
			}
			nest[p] = h;
			count[h]++;
			if(count[h]==2) sum++;
		} else cout<< sum<<endl;
	}
}
 
int main() {
    solve();
    return 0;
}
