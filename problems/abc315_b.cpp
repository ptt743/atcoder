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
	int m ;
	cin>> m;
	vector<int> a(m);
	int sum =0;
	for(int i =0;i< m;i++) cin>> a[i], sum +=a[i];
	sum = sum/2 +1;
	for(int i =0;i< m;i++){
		if(sum> a[i]){ sum -=a[i]; continue;}
		else {
			cout<< i+1 <<" "<< sum <<endl;
			break;
		}
	}
}
 
int main() {
    solve();
    return 0;
}
