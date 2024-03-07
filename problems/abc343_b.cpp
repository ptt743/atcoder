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
	for(int i =0;i< n;i++){
		for(int j =0;j< n;j++){
			int t;
			cin>> t;
			if(t==1){
				cout<< j+1<<" ";
			}
		}
		cout<< endl;
	}
}
 
int main() {
    solve();
    return 0;
}
