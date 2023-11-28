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
	vector<string> matrix(n);
	for(int i =0;i< n;i++) cin>> matrix[i];
	vector<int> row(n), col(n);
	for(int i =0;i< n;i++){
		for(int j =0;j< n;j++){
			if(matrix[i][j]=='o'){
				row[i]++;
				col[j]++;
			}
		}
	}
	long long result = 0;
	for(int i =0;i< n;i++){
		for(int j =0;j<n;j++){
			if(matrix[i][j]=='o'){
				result+= (row[i]-1) * (col[j]-1);
			}
		}
	}
	cout<< result<< endl;
}
 
int main() {
    solve();
    return 0;
}
