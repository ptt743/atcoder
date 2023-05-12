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

void solve(){
	int n ;
	long long d;
	vector<long long> a(n);
	cin>> n>>d;
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =1;i<n;i++){
		if(a[i]- a[i-1]<=d){
			cout<<a[i]<<endl;
			return ;
		}
	}
	cout<<"-1"<<endl;
}
 
int main() {
    solve();
    return 0;
}
