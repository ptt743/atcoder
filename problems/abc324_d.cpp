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

int count(const string &a,const string &b){
	int left = 0;
	for(int i =0;i< a.size();i++){
		if(left>= b.size()) break;
		if(a[i]==b[left]) left++;
	}
	return left;
}

void solve(){
	int n; cin>> n;
	string t; cin>> t;
	vector<string> s(n);
	for(int i =0;i< n;i++) cin>> s[i];
	vector<int> a(5e5+1), b(5e5+1);
	for(int i =0;i< n;i++){
		int temp = count(s[i], t);
		a[i] = temp;
	}
	reverse(t.begin(), t.end());
	for(int i =0;i< n;i++){
		reverse(s[i].begin(), s[i].end());
		int temp = count(s[i], t);
		b[temp]++;
	}
	long long ans = 0;
	for(int i =0;i< n;i++){
		long long temp  = (long long)(t.size() - a[i]);
		for(int j = temp; j<=t.size();j++){
			ans += b[j];
		}
	}
	cout<< ans<<endl;

}
 
int main() {
    solve();
    return 0;
}
