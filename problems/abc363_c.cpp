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
	int n,k;
	cin>> n >> k;
	string s; cin>> s;
	vector<int> a;
	for(int i =0;i< s.size();i++){
		a.push_back(s[i]-'a');
	}
	sort(a.begin(),a.end());
	int ans = 0;
	while(true){
		bool ok = true;
		for(int i =0;i<=n-k;i++){
			bool check = true;
			for(int j =0;j<k;j++){
				if(a[i+j] != a[i+k-1-j]){
					check = false;
					break;
				}
			}
			if(check) ok = false;
		}
		if(ok) ans++;
		if(!next_permutation(a.begin(), a.end()))break;
	}
	cout<< ans <<endl;

}
 
int main() {
    solve();
    return 0;
}
