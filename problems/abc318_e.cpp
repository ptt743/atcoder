#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n ;
	cin>> n;
	vector<long long> a(n);
	map<int,long long> count;
	map<int,long long> pre, count2;
	for(int i =0;i< n;i++){
		cin>> a[i];
		count[a[i]]++;
	}
	long long ans = 0;
	for(int i =0;i< n;i++){
		ans+= (count[a[i]] - count2[a[i]])* count2[a[i]] * ( i - pre[a[i]]-1);
		count2[a[i]]++;
		pre[a[i]] = i;
	}
	cout<< ans<<endl;


}
 
int main() {
    solve();
    return 0;
}
