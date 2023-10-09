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

bool option(pair<int,int> a, pair<int,int> b){
	return a.first > b.first || (a.first == b.first && a.second<b.second);
}
void solve(){
	int n;
	cin>> n;
	vector<pair<int, int>> result(n);
	for(int i=0;i< n;i++){
		string s;
		cin>> s;
		int count = 0;
		for(int j =0;j<n ;j++)
			if(s[j]=='o') count++;
		result[i] = make_pair(count,i);
	}
	sort(result.begin(), result.end(),option);
	for(int i =0;i<n;i++) cout<< result[i].second +1 <<" ";
	cout<<endl;
}
 
int main() {
    solve();
    return 0;
}
