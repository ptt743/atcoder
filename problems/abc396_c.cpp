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
	int n,m;
	cin>> n >> m;
	vector<long long> b(n);
	vector<long long> c(m);
	for(int i =0;i< n;i++) cin >> b[i];
	sort(b.begin(),b.end());
	for(int i =0;i< m;i++) cin>> c[i];
	sort(c.begin(),c.end());
	int index  = 0;
	for(int i=n-2;i>=0;i--){
		b[i] +=b[i+1];
	}
	for(int i=n-2;i>=0;i--){
		if(b[i]<=b[i+1]) {index = i+1; break;}
	}
	int count = n - index;
	long long result = 0;
	result = max(result, b[index]);
	for(int i =m-1;i>=0;i--){
		if(i<m-1) c[i] += c[i+1];
		if(m - i <= count) result = max(result, c[i] + b[index]);
		else if(n-(m-i)>=0) result = max(result, c[i] + b[n - (m-i)]);
	}
	cout<< result << endl;
}
 
int main() {
    solve();
    return 0;
}
