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
	int n , m;
	cin>> n >> m;
	vector<string> S(n);
	vector<string> T(m);
	for(int i =0;i< n;i++) cin>> S[i];
	for(int j =0;j< m;j++) cin>> T[j];
	for(int i =0;i< n;i++){
		for(int j=0;j< n;j++){
			bool ok = true;
			int a = i;
			int b = j;
			if( a > n - m || b > n -m ) continue; 
			for(int k = 0;k<m;k++){
				for(int g =0;g<m;g++){
					if(S[a+k][b+g]!=T[k][g]){
						ok = false;
					}
				}
			}
			if(ok){
				cout<< a+1 <<" "<< b+1 << endl;
				return;
			}
		
		}
	}
}
 
int main() {
    solve();
    return 0;
}
