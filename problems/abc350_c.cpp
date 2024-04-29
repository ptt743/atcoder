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
	int n;
	cin>> n;
	vector<int> index(n+1,0);
	vector<int> a(n+1);
	for(int i =1;i<=n;i++){
		cin>> a[i];
		index[a[i]] = i;
	}
	vector<pair<int,int>> result;
	for(int i =1;i<=n;i++){
		if(a[i]!=i){
			int indexi = index[i];
			index[i] = i;
			index[a[i]] = indexi;
			swap(a[i], a[indexi]);
			result.push_back(make_pair(i, indexi));
		}
	}
	cout<< result.size()<<endl;
	for(int i =0;i< result.size();i++) cout<< result[i].first <<" "<< result[i].second<<endl;
}
 
int main() {
    solve();
    return 0;
}
