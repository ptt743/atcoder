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
	int n; cin>> n;
	vector<int> p(n);
	for(int i =0;i< n;i++) cin>> p[i];
	vector<pair<int,int>> temp;
	for(int i =0;i< n;i++){
		temp.push_back(make_pair(p[i],i));
	}
	sort(temp.begin(), temp.end());
	int left = n-1;
	int r = 1;
	vector<int> result(n,0);
	for(int i =n-1;i>=0;i--){
		if(temp[i].first != temp[left].first){
			r+=left - i;
			left = i;
			result[temp[i].second] = r;
			continue;
		}
		result[temp[i].second] = r;
	}
	for(int i=0;i< n;i++) cout<< result[i]<<endl;

}
 
int main() {
    solve();
    return 0;
}
