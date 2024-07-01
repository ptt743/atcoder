#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <atcoder/all>
#include<bitset>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int n,m,k;
	cin>> n >> m >> k;
	vector<vector<int>> a(m, vector<int>());
	vector<bool> check(m,false);
	for(int i =0;i< m;i++){
		int c; cin>> c;
		for(int j =0;j<c;j++){
			int t; cin>> t;
			a[i].push_back(t);
		}
		char r; cin>> r;
		if(r=='o') check[i] = true;
	}
	int c = 0;
	for(int i =0;i< 1<<n;i++){
		bitset<16>bt(i);
		bool result = true;
		for(int j =0;j< m;j++){
			int count =0;
			for(int k =0;k< a[j].size();k++){
				if(bt[a[j][k]-1]) count++;
			}
			bool che = false;
			if(count >=k ) che = true;
			if(che!= check[j]) result = false;
		}
		if(result) {c ++;}
	}
	cout<< c<<endl;
}
 
int main() {
    solve();
    return 0;
}
