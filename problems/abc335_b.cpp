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
	for(int i =0;i<=n;i++){
		for(int j =0 ;j<=n;j++){
			for(int k =0;k<=n;k++){
				if( i + j + k<=n){
					cout<< i <<" "<< j <<" "<< k <<endl;
				}
			}
		}
	}
}
 
int main() {
    solve();
    return 0;
}
