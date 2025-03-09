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
	int n,m;
	cin>> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for(int i =0;i< n;i++) cin>> a[i];
	for(int i =0;i< m;i++) cin>> b[i];
	vector<pair<int,int>> pairs;
	for(int i =0;i< m;i++){
		pairs.push_back(make_pair(b[i],i));
	}
	sort(pairs.begin(), pairs.end());
	vector<int> indexs(m,-1);
	int index = m-1;
	for(int i =0;i< n;i++){
		while(index>=0 && a[i]<= pairs[index].first){
			indexs[pairs[index].second] = i+1;
			index--;
		}
	}
	for(int i =0;i< m;i++) cout<< indexs[i]<<endl;

}
 
int main() {
    solve();
    return 0;
}
