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
long long pow10(int n){
	if(n==0) return 1ll;
	long long result = 1;
	for(int i =1;i<=n;i++) result*=10;
	return result;
}
void solve(){
	long long n; cin>> n;
	vector<long long> a;
	a.push_back(10);
	for(int i =0;i<=17;i++){
		a.push_back(9 * pow10(i) + a.back());
		cout<< a.back()<<endl;	
	}
	int index = upper_bound(a.begin(), a.end(), n) - a.begin();
	cout<<"index"<<index<<endl;
	int addition = n - a[index-1];
	long long begin = 1 * pow10(index) +1;
	if(index==0) begin = 0;
		cout<< begin<<" "<<addition<<endl;
	int count = 0;
	while(addition>0){
		int back = (addition>=9)?9:addition;
		begin= 9*pow10(count);
		count++;
		addition-=9;
	}
	string prefix = to_string(begin);
	string suffix = prefix;
	reverse(suffix.begin(), suffix.end());
	string result = prefix + suffix;
	cout<< result << endl;
}
 
int main() {
    solve();
    return 0;
}
