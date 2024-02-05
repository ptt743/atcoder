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
	cin >> n;
	vector<long long> a(n);
	for(int i =0;i< n;i++) cin>> a[i];
	long long left = 0, right = 2e15;
	while(left<= right){
		long long mid = (left + right)/2;
		bool check = true;
		long long temp = mid;
		for(int i =0;i< n;i++){
			temp+= a[i];
			if(temp<0) check = false;
		}
		if(check) right = mid -1;
		else left = mid +1;
	}
	for(int i =0;i< n;i++){
		left +=a[i];
	}
	cout<< left <<endl;
}
 
int main() {
    solve();
    return 0;
}
