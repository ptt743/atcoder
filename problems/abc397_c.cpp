#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n;
	cin>> n;
	vector<int> a(n,0);
	for(int i =0;i< n;i++) cin>> a[i];
	vector<int> left;
	set<int> stleft;
	for(int i =0;i< n;i++){
		stleft.insert(a[i]);
		left.push_back(stleft.size());
	}
	set<int> stright;
	int result = 0;
	for(int i = n-1;i>=0;i--){
		stright.insert(a[i]);
		result = max(result, (int)stright.size() + ((i>0)?left[i-1]:0));
	}
	cout<<result<<endl;
}
 
int main() {
    solve();
    return 0;
}
