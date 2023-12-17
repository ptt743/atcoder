#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
//*****taipt*****//
using mint = modint998244353;

void solve(){
	int t;
	cin>> t;
	vector<long long> a= {0,1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111,11111111111,111111111111,1111111111111,11111111111111};
	vector<long long> result;
	for(int i =1;i<=14;i++){
		for(int j=i;j<=14;j++){
			for(int k =j;k<=14;k++){
				long long temp = a[i] + a[j] + a[k];
				result.push_back(temp);
			}
		}
	}
	sort(result.begin(), result.end());
	cout<<result[t-1]<<endl;
}
 
int main() {
    solve();
    return 0;
}
