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
	vector<pair<int,int>> rates = {{1,99},{100,199},{200,299},{300,399}};
	int index = 0;
	for(int i =0;i< 4;i++){
		if(n< rates[i].first){
			index = i;
			break;
		}
	}
	int add = rates[index].first -n;
	cout<< add <<endl;
}
 
int main() {
    solve();
    return 0;
}
