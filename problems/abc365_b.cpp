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
	int n ; cin>> n;
	vector<int> a(n);
	for(int i =0;i< n;i++){
		cin>> a[i];
	}
	long long max_value = 0;
	for(int i=0;i< n;i++){
		if(max_value<a[i]) max_value = a[i];
	}
	long long second_value = 0;
	int result = -1;
	for(int i =0;i< n;i++){
		if(a[i]> second_value && a[i]< max_value){
			second_value = a[i];
			result = i+1;
		}
	}
	cout<< result <<endl;
		
}
 
int main() {
    solve();
    return 0;
}
